void _ZN8uu_split8platform4unix12FilterWriter3new17h6a73b6eeafac1893E
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  int local_178;
  int local_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined local_140 [56];
  undefined local_108 [240];
  
  _ZN8uu_split8platform4unix13WithEnvVarSet3new17h427893530f97257fE(local_140,param_4,param_5);
                    /* try { // try from 0016bd45 to 0016bd9c has its CatchHandler @ 0016be71 */
  _ZN3std3env3var17hb56eac25d1451addE(&local_198,"SHELL",5);
  if (local_198 == 1) {
    _ZN8uu_split8platform4unix12FilterWriter3new28__u7b__u7b_closure_u7d__u7d_17h1b825aae2aa074bcE
              (&local_158,CONCAT44(uStack_18c,uStack_190),CONCAT44(uStack_184,uStack_188));
  }
  else {
    local_158 = uStack_190;
    uStack_154 = uStack_18c;
    uStack_150 = uStack_188;
    uStack_14c = uStack_184;
  }
  _ZN3std7process7Command3new17h9c867987cc8ecf9eE(local_108,&local_158);
                    /* try { // try from 0016bd9d to 0016bde8 has its CatchHandler @ 0016be76 */
  _ZN3std7process7Command3arg17h01d1b9d820a6f008E(local_108,"-c",2);
  _ZN3std7process7Command3arg17h01d1b9d820a6f008E(local_108,param_2,param_3);
  _ZN3std7process7Command5stdin17hf847da75d4414cb9E(local_108);
  (*(code *)PTR__ZN3std7process7Command5spawn17haea730ea7b05a977E_002120d0)(&local_178,local_108);
  if (local_178 == 1) {
    *(undefined8 *)(param_1 + 2) = local_170;
    *param_1 = 1;
                    /* try { // try from 0016bdff to 0016be0b has its CatchHandler @ 0016be71 */
    _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h4a39623342789579E(local_108);
  }
  else {
    local_198 = local_174;
    uStack_194 = (undefined4)local_170;
    uStack_190 = (undefined4)((ulong)local_170 >> 0x20);
    uStack_18c = local_168;
    uStack_188 = uStack_164;
    uStack_184 = uStack_160;
    uStack_180 = uStack_15c;
                    /* try { // try from 0016be29 to 0016be35 has its CatchHandler @ 0016be64 */
    _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h4a39623342789579E(local_108);
    *(ulong *)(param_1 + 4) = CONCAT44(uStack_188,uStack_18c);
    *(ulong *)(param_1 + 6) = CONCAT44(uStack_180,uStack_184);
    param_1[1] = local_198;
    param_1[2] = uStack_194;
    param_1[3] = uStack_190;
    param_1[4] = uStack_18c;
    *param_1 = 0;
  }
  _ZN4core3ptr60drop_in_place_LT_uu_split__platform__unix__WithEnvVarSet_GT_17h230d990f3209e038E
            (local_140);
  return;
}