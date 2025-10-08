undefined8 *
_ZN6uu_ptx10read_input17h2aa7184f71c3fbbdE(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 local_148;
  long lStack_140;
  long local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  long local_118;
  undefined *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined local_e8 [16];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined local_b8 [24];
  undefined local_a0 [56];
  undefined local_68 [56];
  
  local_e8 = _ZN3std6thread5local17LocalKey_LT_T_GT_4with17hdc2be79178508d50E();
  local_108 = PTR_DAT_00350de8;
  uStack_100 = _UNK_00350df0;
  local_f8 = _DAT_00350df8;
  uStack_f4 = _UNK_00350dfc;
  uStack_f0 = _UNK_00350e00;
  uStack_ec = _UNK_00350e04;
  if (param_3 != 0) {
    param_3 = param_3 * 0x18;
    lVar5 = 0;
    do {
      cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hc639eb17d6278023E
                        (*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),"-",1);
      if (cVar2 == '\0') {
        _ZN3std2fs4File4open17h695eaf09d3a17d8cE(&local_148,param_2);
        if ((int)local_148 == 1) {
          param_1[1] = lStack_140;
          *param_1 = 0;
          _ZN4core3ptr108drop_in_place_LT_std__collections__hash__map__HashMap_LT_alloc__string__String_C_uu_ptx__FileContent_GT__GT_17h033d5e534b5f9d40E
                    (&local_108);
          return param_1;
        }
        uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h78f68dd9e7792e5eE(local_148._4_4_);
        ppuVar4 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h1597f39cce541ee6E_00351680
        ;
      }
      else {
                    /* try { // try from 0022b99d to 0022b9ff has its CatchHandler @ 0022bb6c */
        uVar3 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_00380290)();
        uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h16f26c34398979dfE(uVar3);
        ppuVar4 = (undefined **)&DAT_003516d8;
      }
      _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h3d0c7b14f6b3f130E
                (local_a0,uVar3,ppuVar4);
      _ZN4core4iter6traits8iterator8Iterator7collect17he2fa0028cb9148a2E(&local_148,local_a0);
      lVar1 = local_138;
                    /* try { // try from 0022ba39 to 0022ba45 has its CatchHandler @ 0022bb4b */
      _ZN4core4iter6traits8iterator8Iterator7collect17h75228c1ae200d50cE
                (&local_d0,lStack_140,lStack_140 + local_138 * 0x18,-local_148);
                    /* try { // try from 0022ba46 to 0022ba59 has its CatchHandler @ 0022bb39 */
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_0037fed8
      )(local_b8,param_2);
      local_120 = local_c0;
      local_130 = local_d0;
      uStack_12c = uStack_cc;
      uStack_128 = uStack_c8;
      uStack_124 = uStack_c4;
                    /* try { // try from 0022ba8f to 0022baab has its CatchHandler @ 0022bb6a */
      local_118 = lVar5;
      _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h4f58e0fefa489ec5E
                (local_68,&local_108,local_b8,&local_148);
      param_2 = param_2 + 0x18;
      _ZN4core3ptr68drop_in_place_LT_core__option__Option_LT_uu_ptx__FileContent_GT__GT_17hbb7b2e41fca10735E
                (local_68);
      lVar5 = lVar5 + lVar1;
      param_3 = param_3 + -0x18;
    } while (param_3 != 0);
  }
  *(undefined (*) [16])(param_1 + 4) = local_e8;
  param_1[2] = CONCAT44(uStack_f4,local_f8);
  param_1[3] = CONCAT44(uStack_ec,uStack_f0);
  *param_1 = local_108;
  param_1[1] = uStack_100;
  return param_1;
}