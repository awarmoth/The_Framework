#include "ES_Configure.h" /* gets us event definitions */
#include "ES_Types.h"     /* gets bool type for returns */

void InitializePins(void);
void SetMotorController(uint8_t control);
bool getISRFlag(void);
void Set_Launcher_Command(uint16_t Requested_Command);
void FindTape(void);
void SetLED(uint8_t Mode, uint8_t LED);
void SetLauncherCommand(uint8_t InputCommand);
void SetMotorSensorDirection(uint8_t dir);
