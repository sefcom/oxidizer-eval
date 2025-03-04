undefined8 * _ZN7uu_tail5paths5Input7resolve17h81e1f38162942b9dE(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined local_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  
  if (*(long *)(param_2 + 0x18) != -0x8000000000000000) {
    _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E(&local_90,"/dev/stdin",10);
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
                    /* try { // try from 0021108b to 00211095 has its CatchHandler @ 00211206 */
    cVar3 = _ZN59__LT_std__path__PathBuf_u20_as_u20_core__cmp__PartialEq_GT_2eq17h1d8861b9e1bd0bd7E
                      (uVar1,uVar2,CONCAT44(uStack_84,uStack_88),local_80);
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd68403fe0abd735bE(&local_90);
    if (cVar3 == '\0') {
      _ZN3std2fs12canonicalize17hd214f5c614fa2ecbE(&local_90,uVar1,uVar2);
      if (CONCAT44(uStack_8c,local_90) == -0x8000000000000000) {
        *param_1 = 0x8000000000000000;
        _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17h2718b16a2e13a805E
                  (&local_90);
        return param_1;
      }
      param_1[2] = local_80;
      *param_1 = CONCAT44(uStack_8c,local_90);
      param_1[1] = CONCAT44(uStack_84,uStack_88);
      return param_1;
    }
  }
  _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E(local_40,"/dev/stdin",10);
                    /* try { // try from 002110c8 to 002110e7 has its CatchHandler @ 00211215 */
  _ZN3std2fs12canonicalize17hd214f5c614fa2ecbE(&local_90,local_38,local_30);
  if (CONCAT44(uStack_8c,local_90) == -0x8000000000000000) {
    local_78 = -0x8000000000000000;
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17h2718b16a2e13a805E
              (&local_90);
  }
  else {
    local_78 = CONCAT44(uStack_8c,local_90);
    uStack_70 = uStack_88;
    uStack_6c = uStack_84;
    local_68 = local_80;
    if (local_78 != -0x8000000000000000) {
                    /* try { // try from 00211148 to 0021115e has its CatchHandler @ 002111f7 */
      _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E(&local_90,"/dev/fd/0 <==\n",9);
      local_48 = local_80;
      local_58 = local_90;
      uStack_54 = uStack_8c;
      uStack_50 = uStack_88;
      uStack_4c = uStack_84;
                    /* try { // try from 00211182 to 00211186 has its CatchHandler @ 002111e8 */
      cVar3 = _ZN59__LT_std__path__PathBuf_u20_as_u20_core__cmp__PartialEq_GT_2eq17h1d8861b9e1bd0bd7E
                        (CONCAT44(uStack_6c,uStack_70),local_68,CONCAT44(uStack_84,uStack_88));
      if (cVar3 == '\0') {
                    /* try { // try from 002111c8 to 002111d1 has its CatchHandler @ 002111f7 */
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd68403fe0abd735bE(&local_58);
        param_1[2] = local_68;
        *(undefined4 *)param_1 = (undefined4)local_78;
        *(undefined4 *)((long)param_1 + 4) = local_78._4_4_;
        *(undefined4 *)(param_1 + 1) = uStack_70;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_6c;
      }
      else {
                    /* try { // try from 0021118b to 00211194 has its CatchHandler @ 002111f7 */
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd68403fe0abd735bE(&local_58);
        *param_1 = 0x8000000000000000;
        if (local_78 != -0x8000000000000000) {
                    /* try { // try from 002111a3 to 002111ac has its CatchHandler @ 00211215 */
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd68403fe0abd735bE(&local_78);
        }
      }
      goto LAB_00211108;
    }
  }
  *param_1 = 0x8000000000000000;
LAB_00211108:
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd68403fe0abd735bE(local_40);
  return param_1;
}