void _ZN4just10subcommand10Subcommand4edit17h78df30ddd5b0fe41E(undefined *param_1,long param_2)

{
  int local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  int local_110;
  int iStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined local_f8 [224];
  
  _ZN3std3env6var_os17h1049275d85070725E(local_f8,&DAT_0019e541,6);
  _ZN4core6option15Option_LT_T_GT_7or_else17he3544969cbfbc8cfE(&local_110,local_f8);
  local_118 = local_100;
  local_128 = local_110;
  iStack_124 = iStack_10c;
  uStack_120 = uStack_108;
  uStack_11c = uStack_104;
                    /* try { // try from 0038dcba to 0038dcc6 has its CatchHandler @ 0038dd71 */
  _ZN3std7process7Command3new17h8c26813fa7e2543dE(local_f8,&local_128);
                    /* try { // try from 0038dccb to 0038dcf1 has its CatchHandler @ 0038dd84 */
  _ZN3std7process7Command11current_dir17hfb203bdc96bba19bE(local_f8,param_2 + 0x18);
  _ZN3std7process7Command3arg17hdfbbb0c642d6ac00E(local_f8,param_2);
  (*(code *)PTR__ZN3std7process7Command6status17h6e1e3c5811681da5E_00566cf8)(&local_110,local_f8);
                    /* try { // try from 0038dcf2 to 0038dcfb has its CatchHandler @ 0038dd5b */
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h68c11017a1ebd395E(local_f8);
  if (local_110 == 1) {
    *(undefined8 *)(param_1 + 0x20) = local_118;
    *(ulong *)(param_1 + 0x10) = CONCAT44(iStack_124,local_128);
    *(ulong *)(param_1 + 0x18) = CONCAT44(uStack_11c,uStack_120);
    *param_1 = 0x13;
    *(ulong *)(param_1 + 8) = CONCAT44(uStack_104,uStack_108);
  }
  else if (iStack_10c == 0) {
    *param_1 = 0x38;
    _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hb5088e4c98ca9abdE(&local_128);
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = local_118;
    *(ulong *)(param_1 + 8) = CONCAT44(iStack_124,local_128);
    *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_11c,uStack_120);
    *param_1 = 0x14;
    *(int *)(param_1 + 4) = iStack_10c;
  }
  return;
}