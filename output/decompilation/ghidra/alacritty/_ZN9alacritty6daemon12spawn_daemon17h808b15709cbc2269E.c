undefined8
_ZN9alacritty6daemon12spawn_daemon17h808b15709cbc2269E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  int local_160;
  int iStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  char local_140 [8];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined local_118 [240];
  
  _ZN3std7process7Command3new17h873610fb801d3889E(local_118,param_1,param_2);
                    /* try { // try from 00544a7e to 00544b08 has its CatchHandler @ 00544b89 */
  _ZN3std7process7Command4args17h0cf9f05e3a8f850eE(local_118,param_3,param_4);
  _ZN3std7process7Command5stdin17hd9c09d4a3eda940eE(local_118);
  _ZN3std7process7Command6stdout17he96f17e76a801f2fE(local_118);
  _ZN3std7process7Command6stderr17h4621e165c01a8e4bE(local_118);
  _ZN9alacritty6daemon23foreground_process_path17h3482b68207808211E(&local_160,param_5,param_6);
  local_140[0] = (char)local_160;
  local_138 = local_158;
  uStack_134 = uStack_154;
  uStack_130 = uStack_150;
  uStack_12c = uStack_14c;
  _ZN76__LT_std__process__Command_u20_as_u20_std__os__unix__process__CommandExt_GT_8pre_exec17h1e0f5a3fbd486634E
            (local_118,local_140);
  (*(code *)PTR__ZN3std7process7Command5spawn17haea730ea7b05a977E_009dfda0)(&local_160,local_118);
  if (local_160 == 1) {
    uVar1 = CONCAT44(uStack_154,local_158);
  }
  else {
    local_160 = iStack_15c;
    uStack_154 = uStack_150;
    uStack_150 = uStack_14c;
    uStack_14c = uStack_148;
    uStack_148 = uStack_144;
                    /* try { // try from 00544b33 to 00544b42 has its CatchHandler @ 00544b7a */
    (*(code *)PTR__ZN3std7process5Child4wait17h7e33de4911114104E_009dfda8)(local_140,&local_160);
    if (local_140[0] == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = CONCAT44(uStack_134,local_138);
    }
    _ZN4core3ptr40drop_in_place_LT_std__process__Child_GT_17h4bac703b10ba1aefE(&local_160);
  }
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17hdea515ac9bba3b5eE(local_118);
  return uVar1;
}