undefined8 *
_ZN10check_docs10find_files17h9e4b901753d7660dE
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 extraout_RDX;
  undefined8 *local_1f8;
  undefined8 **ppuStack_1f0;
  char *local_1e8;
  undefined8 local_1e0;
  char *local_1d8;
  undefined8 local_1d0;
  char *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  char *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 local_168;
  undefined local_160 [24];
  undefined local_148 [24];
  int local_130;
  undefined **local_128;
  undefined8 *local_120;
  undefined8 **ppuStack_118;
  char *local_110;
  undefined8 local_108;
  undefined local_48 [24];
  
  local_170 = param_2;
  local_168 = param_3;
  _ZN3std7process7Command3new17h6b193cfe60369f89E(&local_128,&DAT_00144240);
  local_1e8 = "-type";
  local_1e0 = 5;
  local_1d8 = "f";
  local_1d0 = 1;
  local_1c8 = "-name";
  local_1c0 = 5;
  local_1a8 = "!";
  local_1a0 = 1;
  local_198 = "-name";
  local_190 = 5;
  local_180 = param_7;
                    /* try { // try from 001edf8a to 001edfd1 has its CatchHandler @ 001ee17b */
  local_1f8 = param_4;
  ppuStack_1f0 = (undefined8 **)param_5;
  local_1b8 = param_2;
  local_1b0 = param_3;
  local_188 = param_6;
  _ZN3std7process7Command4args17hc106b3ad5f0cb0e8E(&local_128,&local_1f8);
  (*(code *)PTR__ZN3std7process7Command6output17h8d3fd625d1d0bec1E_002fea60)(&local_1f8,&local_128);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17hd013351f25734c35E
            (local_160,&local_1f8,"Program `find` not in PATH",0x1a,&DAT_002d36d0);
                    /* try { // try from 001edfd2 to 001ee069 has its CatchHandler @ 001ee156 */
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h13e711a87b909194E(&local_128);
  if (local_130 == 0) {
                    /* try { // try from 001ee08d to 001ee11d has its CatchHandler @ 001ee151 */
    _ZN5alloc6string6String9from_utf817hcb4419710bc0e60bE(&local_128,local_160);
    local_1f8 = local_120;
    ppuStack_1f0 = ppuStack_118;
    local_1e8 = local_110;
    uVar1 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17ha48715314de132c6E
                      (&local_128);
    param_1[1] = uVar1;
    *param_1 = 0x8000000000000000;
  }
  else {
    local_1f8 = &local_170;
    ppuStack_1f0 = (undefined8 **)
                   _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h8c5b7927cb42b082E;
    local_128 = &PTR_s_Failed_running__find__command_fo_002d36c0;
    local_120 = (undefined8 *)&DAT_00000001;
    local_108 = 0;
    local_110 = (char *)0x1;
    ppuStack_118 = &local_1f8;
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