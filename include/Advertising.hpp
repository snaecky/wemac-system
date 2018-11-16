#ifndef VMCORE_ADVERTISING_HPP
#define VMCORE_ADVERTISING_HPP

#include "Queue.hpp"
#include "Log.hpp"
#include "ProjectIncludes.hpp"

namespace VMCore {
    class Advertising {
        private:    
           Queue mainQueue;
           Queue removedQueue;
           
        public:
            Advertising();
            ~Advertising();
            std::string getAdvertising();
            void addAdvertising(std::string);
            void removeAdvertising(std::string);
    };  
}

#endif