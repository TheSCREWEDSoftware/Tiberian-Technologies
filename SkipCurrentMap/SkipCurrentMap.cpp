#include "SkipCurrentMap.h"
#include "gmgame.h"
#include "Iterator.h"
#include "CommandLineParser.h"
#include "engine_tt.h"
#include "General.h"

// Example plugin structure for SkipCurrentMap

// Command handler for !skipCurrent
class CommandSKIPCURRENT : public ConsoleFunctionClass {
public:
    const char* Get_Name() { return "skipCurrent"; }
    const char* Get_Help() { return "skipCurrent - Skips the current map."; }
    void Activate(const char* argumentsString) {
        Console_Output("Skipping current map...");
        // TODO: Add logic to actually skip the map
    }
};

// Plugin structure for SkipCurrentMap
class SKIPCURRENTMAP : public Plugin {
public:
    SKIPCURRENTMAP() {
        ConsoleFunctionList.Add(new CommandSKIPCURRENT);
        Sort_Function_List();
        Verbose_Help_File();
        Console_Output("Loading SkipCurrentMap Plugin\n");
    }
    ~SKIPCURRENTMAP() {
        Console_Output("Unloading SkipCurrentMap Plugin\n");
    }
    // Add your logic here
};

SKIPCURRENTMAP skipCurrentMap;


