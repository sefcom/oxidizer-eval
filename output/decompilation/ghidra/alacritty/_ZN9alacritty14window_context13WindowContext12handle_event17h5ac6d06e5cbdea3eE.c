void _ZN9alacritty14window_context13WindowContext12handle_event17h5ac6d06e5cbdea3eE
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  byte bVar7;
  long *plVar8;
  long lVar9;
  long *local_278;
  long *local_270;
  long local_250;
  long local_248;
  undefined8 local_240;
  long local_238;
  long local_230;
  long local_228;
  long local_220;
  long local_218;
  long local_210;
  long local_208;
  long local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  long local_1e8;
  long local_1e0;
  byte *local_1d8;
  char *local_1d0;
  undefined8 local_1c8;
  undefined local_1c0;
  long local_1b8;
  undefined local_1b0 [184];
  undefined local_f8 [200];
  
  if (*param_5 == 3) {
    if (*(short *)(param_5 + 0x12) != 0x1d) goto LAB_005701d9;
  }
  else if ((int)*param_5 != 8) {
LAB_005701d9:
    (*(code *)PTR_memcpy_009de0b0)(local_f8,param_5,0xc0);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hae985e737553ba9cE
              (param_1 + 0x1de0,local_f8,&PTR_s_alacritty_src_window_context_rs_009843b0);
    return;
  }
  if (*(long *)(param_1 + 0x1df0) == 0) {
    _ZN4core3ptr71drop_in_place_LT_winit__event__Event_LT_alacritty__event__Event_GT__GT_17h2f5abd1f5210d02cE
              (param_5);
    return;
  }
  lVar3 = *(long *)(param_1 + 0x1e18);
                    /* try { // try from 0056ffbd to 0056ffcb has its CatchHandler @ 005702ed */
  _ZN18alacritty_terminal4sync18FairMutex_LT_T_GT_4lock17h8771cda87d96e8b1E();
  local_228 = param_1 + 0x1e28;
  lVar9 = lVar3 + 0x18;
  local_230 = param_1 + 0x1d58;
  lVar1 = param_1 + 0x1170;
  local_210 = *(long *)(param_1 + 0x1e20) + 0x10;
  local_208 = param_1 + 0x1e39;
  local_200 = param_1 + 0x1d30;
  local_1e0 = param_1 + 0x1e10;
  pbVar2 = (byte *)(param_1 + 0x1e38);
  local_1c8 = *(undefined8 *)(param_1 + 0x1e30);
  local_1c0 = *(undefined *)(param_1 + 0x1e3b);
  uVar4 = *(undefined8 *)(param_1 + 0x1100);
  local_250 = param_1 + 0x1d40;
  local_248 = lVar9;
  local_240 = param_3;
  local_238 = param_1 + 0x1cf0;
  local_220 = lVar1;
  local_218 = param_1 + 0x1cd0;
  local_1f8 = param_2;
  local_1f0 = param_4;
  local_1e8 = param_1;
  local_1d8 = pbVar2;
  local_1d0 = (char *)(param_1 + 0x1e3a);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_5drain17ha853ee75937775c8E(&local_278,param_1 + 0x1de0);
  puVar6 = PTR_memcpy_009de0b0;
  plVar8 = local_278;
  if (local_278 != local_270) {
    do {
      lVar5 = *local_278;
      plVar8 = local_278 + 0x18;
      if (lVar5 == 0xb) break;
      plVar8 = local_278 + 1;
      local_278 = local_278 + 0x18;
      local_1b8 = lVar5;
      (*(code *)puVar6)(local_1b0,plVar8,0xb8);
                    /* try { // try from 0057015b to 00570165 has its CatchHandler @ 005702f7 */
      _ZN9alacritty5event194__LT_impl_u20_alacritty__input__Processor_LT_alacritty__event__EventProxy_C_alacritty__event__ActionContext_LT_alacritty_terminal__event_loop__Notifier_C_alacritty__event__EventProxy_GT__GT__GT_12handle_event17hbc6e5c650f7e56d9E
                (&local_250,&local_1b8);
      plVar8 = local_278;
    } while (local_278 != local_270);
  }
                    /* try { // try from 00570172 to 005701bf has its CatchHandler @ 005702f2 */
  local_278 = plVar8;
  _ZN4core3ptr103drop_in_place_LT_alloc__vec__drain__Drain_LT_winit__event__Event_LT_alacritty__event__Event_GT__GT__GT_17he821fa7f9645a3a7E
            (&local_278);
  if (*(char *)(param_1 + 0x16cc) == '\0') {
    bVar7 = *pbVar2;
    if (((bVar7 & 1) == 0) && (*(char *)(param_1 + 0x1d29) != '\x01')) goto LAB_00570281;
  }
  else {
    _ZN9alacritty14window_context13WindowContext21submit_display_update17h6cc5b42c48dd8bf0E
              (lVar9,lVar1,param_1 + 0x1d40,param_1 + 0x1cd0,param_1,uVar4,
               *(long *)(param_1 + 0x1e20) + 0x10);
    *pbVar2 = 1;
  }
                    /* try { // try from 0057025b to 005702c8 has its CatchHandler @ 005702f2 */
  bVar7 = _ZN9alacritty7display7Display24update_highlighted_hints17h6a14f2ce82852321E
                    (lVar1,lVar9,*(undefined8 *)(*(long *)(param_1 + 0x1e20) + 0x2e0),
                     *(undefined8 *)(*(long *)(param_1 + 0x1e20) + 0x2e8),param_1 + 0x1cf0,
                     *(undefined4 *)(param_1 + 0x1e28));
  bVar7 = bVar7 | *(byte *)(param_1 + 0x1e38);
  *(byte *)(param_1 + 0x1e38) = bVar7;
  *(undefined *)(param_1 + 0x1d29) = 0;
LAB_00570281:
  if (((((bVar7 & 1) != 0) && (*(char *)(param_1 + 0x1580) == '\x01')) &&
      (*(char *)(param_1 + 0x1e3a) == '\0')) &&
     (((*(int *)param_5 != 3 || (*(short *)(param_5 + 0x12) != 0x1d)) &&
      (*(char *)(param_1 + 0x1581) == '\0')))) {
    *(undefined *)(param_1 + 0x1581) = 1;
    _ZN5winit6window6Window14request_redraw17h03824d2d23a334d5E(param_1 + 0x14b0);
  }
                    /* try { // try from 005702c9 to 005702d2 has its CatchHandler @ 005702ed */
  _ZN4core3ptr157drop_in_place_LT_lock_api__mutex__MutexGuard_LT_parking_lot__raw_mutex__RawMutex_C_alacritty_terminal__term__Term_LT_alacritty__event__EventProxy_GT__GT__GT_17h090449980f2d2d72E
            (lVar3 + 0x10);
  _ZN4core3ptr71drop_in_place_LT_winit__event__Event_LT_alacritty__event__Event_GT__GT_17h2f5abd1f5210d02cE
            (param_5);
  return;
}