-------- EventFlow: TwnObj_GoddesStatue_A_02 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CallDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo034_0', 'EntryPointName': 'Demo034_0_1', 'EndFade': 0})
}
