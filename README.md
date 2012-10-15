**Introduction:**

DefineBlockFrequency is meant to run certain code blocks in a run loop at a lower frequency. For example, if you're running a loop at 60Hz, you could use DefineBlockFrequency to run a code block at 30Hz instead. 

**Example:**

    #include "Freq.h"

    // Code that runs in a 60Hz loop
    {
        std::cout << "This will be printed every iteration" << std::endl;

        if(defineBlockFrequency(2))
        {
            std::cout << "This will be printed every second iteration" << std::endl;
        }
    }

**Requirements:**

DefineBlockFrequency uses std::unordered_map, which is implemented in all modern C++ compilers.

**Credits and licensing:**

DefineBlockFrequency (c) 2012 was written by Assaf Muller. The code is under the MIT license, which means you can use it for closed, open source, free and commercial products. It is currently hosted at: https://github.com/assafmuller/DefineBlockFrequency. Feel free to fork and pull request!