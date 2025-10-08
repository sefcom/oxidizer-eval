undefined8 *
_ZN10check_docs18search_for_pattern17hb802ea78856797e4E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 extraout_RDX;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  undefined **ppuStack_190;
  undefined8 local_188;
  undefined local_160 [24];
  undefined local_148 [24];
  int local_130;
  undefined **local_128;
  undefined *local_120;
  undefined **ppuStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined local_48 [24];
  
  local_1a8 = param_2;
  local_1a0 = param_3;
  _ZN3std7process7Command3new17h6b193cfe60369f89E(&local_128,"grepb");
                    /* try { // try from 001edc20 to 001edcf5 has its CatchHandler @ 001ede83 */
  _ZN3std7process7Command3arg17h09db51410207777dE(&local_128,"-H",2);
  _ZN3std7process7Command3arg17h09db51410207777dE(&local_128,"-n",2);
  _ZN3std7process7Command3arg17h09db51410207777dE(&local_128,"-r",2);
  _ZN3std7process7Command3arg17h09db51410207777dE(&local_128,"--binary-files=without-match",0x1c);
  _ZN3std7process7Command3arg17h09db51410207777dE(&local_128,"--exclude-dir=check-docs",0x18);
  _ZN3std7process7Command3arg17h09db51410207777dE(&local_128,param_2,param_3);
  _ZN3std7process7Command3arg17h09db51410207777dE(&local_128,param_4,param_5);
  (*(code *)PTR__ZN3std7process7Command6output17h8d3fd625d1d0bec1E_002fea60)(&local_198,&local_128);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17hd013351f25734c35E
            (local_160,&local_198,"failed grep command",0x13,&DAT_002d36a8);
                    /* try { // try from 001edcf6 to 001edd80 has its CatchHandler @ 001ede64 */
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h13e711a87b909194E(&local_128);
  if (local_130 == 0) {
                    /* try { // try from 001edda1 to 001ede2e has its CatchHandler @ 001ede5f */
    _ZN5alloc6string6String9from_utf817hcb4419710bc0e60bE(&local_128,local_160);
    local_198 = local_120;
    ppuStack_190 = ppuStack_118;
    local_188 = local_110;
    uVar1 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17ha48715314de132c6E
                      (&local_128);
    param_1[1] = uVar1;
    *param_1 = 0x8000000000000000;
  }
  else {
    ppuStack_190 = (undefined **)
                   _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h8c5b7927cb42b082E;
    local_128 = &PTR_s_Failed_running__grep__command_fo_002d3688;
    local_120 = (undefined *)0x2;
    local_108 = 0;
    local_110 = 1;
    local_198 = (undefined *)&local_1a8;
    ppuStack_118 = &local_198;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hb92624ab2af3a182E
              (local_48,0,extraout_RDX,&local_128);
    uVar1 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17h1606e8560e5c3217E(local_48);
    param_1[1] = uVar1;
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h3b4e207945e3471fE(local_160);
  }
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h3b4e207945e3471fE(local_148);
  return param_1;
}