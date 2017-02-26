// ConstructingState_t: GettingTargetStation, DrivingAlongTape, CheckIn, Shooting, Reloading
// Module level functions: DuringGettingTargetStation, DuringDrivingAlongTape, DuringCheckIn, DuringShooting, DuringReloading

#ifndef ConstructingSM_H
#define ConstructingSM_H

#include "ES_Configure.h" /* gets us event definitions */
#include "ES_Types.h"     /* gets bool type for returns */

// State definitions for use with the query function
typedef enum { GettingTargetStation, DrivingAlongTape, CheckIn, Shooting, Reloading } ConstructingState_t ;

// Public Function Prototypes

ES_Event RunConstructingSM( ES_Event CurrentEvent );
void StartConstructingSM ( ES_Event CurrentEvent );
static ES_Event DuringGettingTargetStation( ES_Event Event);
static ES_Event DuringDrivingAlongTape( ES_Event Event);
static ES_Event DuringCheckIn( ES_Event Event);
static ES_Event DuringShooting( ES_Event Event);
static ES_Event DuringShooting( ES_Event Event);
static ES_Event DuringReloading(ES_Event ThisEvent);
void UpdateStatus( void );


#endif /*ConstructingSM_H */