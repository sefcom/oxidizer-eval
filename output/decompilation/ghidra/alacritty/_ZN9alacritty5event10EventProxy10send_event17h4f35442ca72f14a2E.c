void _ZN9alacritty5event10EventProxy10send_event17h4f35442ca72f14a2E
               (long param_1,undefined8 param_2)

{
  undefined auStack_198 [192];
  undefined local_d8 [192];
  
  _ZN9alacritty5event5Event3new17h74b0126f9adfc99eE
            (local_d8,param_2,*(undefined8 *)(param_1 + 0x20));
  _ZN5winit10event_loop23EventLoopProxy_LT_T_GT_10send_event17ha003452b73db1a9aE
            (auStack_198,param_1,local_d8);
  _ZN4core3ptr125drop_in_place_LT_core__result__Result_LT__LP__RP__C_winit__event_loop__EventLoopClosed_LT_alacritty__event__Event_GT__GT__GT_17ha34e38cbba7ecdb0E
            (auStack_198);
  return;
}