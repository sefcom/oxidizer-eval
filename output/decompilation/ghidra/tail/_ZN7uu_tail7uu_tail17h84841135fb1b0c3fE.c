undefined  [16] _ZN7uu_tail7uu_tail17h84841135fb1b0c3fE(long param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 unaff_R13;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined local_19a;
  undefined local_199;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined local_178 [8];
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  undefined local_150 [144];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  
  local_19a = *(undefined *)(param_1 + 0x4a);
  local_199 = 1;
  _ZN7uu_tail6follow5watch8Observer4from17h487da06aa235f7f0E(local_150,param_1);
                    /* try { // try from 001fff11 to 001fff1b has its CatchHandler @ 002000f9 */
  auVar5 = _ZN7uu_tail6follow5watch8Observer5start17h087097f796044307E(local_150,param_1);
  if (auVar5._0_8_ == 0) {
                    /* try { // try from 001fff3a to 001fff43 has its CatchHandler @ 002000f9 */
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h4778a48a6f997702E
              (local_178,param_1 + 0x18);
    local_158 = local_168 * 0x30 + local_170;
    local_160 = local_170;
    lVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h37bf687fdcd4f7caE
                      (&local_160);
    if (lVar3 != 0) {
      do {
        if (*(long *)(lVar3 + 0x18) == -0x8000000000000000) {
LAB_001ffff4:
          auVar5 = _ZN7uu_tail10tail_stdin17h2faea1a609e9111aE(param_1,&local_19a,lVar3,local_150);
        }
        else {
                    /* try { // try from 001fffa0 to 001fffb9 has its CatchHandler @ 0020010d */
          _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E(&local_c0,"/dev/stdin: \n",10)
          ;
          local_188 = local_b0;
          local_198 = local_c0;
          uStack_194 = uStack_bc;
          uStack_190 = uStack_b8;
          uStack_18c = uStack_b4;
                    /* try { // try from 001fffe1 to 001fffe5 has its CatchHandler @ 002000fe */
          cVar2 = _ZN59__LT_std__path__PathBuf_u20_as_u20_core__cmp__PartialEq_GT_2eq17h1d8861b9e1bd0bd7E
                            (*(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(lVar3 + 0x28),
                             CONCAT44(uStack_b4,uStack_b8));
          if (cVar2 != '\0') {
                    /* try { // try from 001fffea to 0020003a has its CatchHandler @ 0020010d */
            _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd68403fe0abd735bE(&local_198);
            goto LAB_001ffff4;
          }
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd68403fe0abd735bE(&local_198);
          auVar5 = _ZN7uu_tail9tail_file17he6a88cf1ecd2d2b4E
                             (param_1,&local_19a,lVar3,*(undefined8 *)(lVar3 + 0x20),
                              *(undefined8 *)(lVar3 + 0x28),local_150,0);
        }
        if (auVar5._0_8_ != 0) {
                    /* try { // try from 002000a8 to 002000b1 has its CatchHandler @ 002000f9 */
          _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_uu_tail__paths__Input_GT__GT_17h2f358108f234e3daE
                    (local_178);
          goto LAB_001fff27;
        }
        lVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h37bf687fdcd4f7caE
                          (&local_160);
      } while (lVar3 != 0);
    }
                    /* try { // try from 00200057 to 0020006f has its CatchHandler @ 002000f9 */
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_uu_tail__paths__Input_GT__GT_17h2f358108f234e3daE
              (local_178);
    if ((*(char *)(param_1 + 0x4c) == '\x02') ||
       (cVar2 = _ZN7uu_tail4args8Settings14has_only_stdin17h95a526b27c276cb7E(param_1),
       cVar2 != '\0')) {
      bVar1 = false;
    }
    else {
      (*(code *)PTR_memcpy_002c2760)(&local_c0,local_150,0x90);
      auVar5 = _ZN7uu_tail6follow5watch6follow17hde16143c14d7b9fcE(&local_c0,param_1);
      uVar4 = auVar5._8_8_;
      lVar3 = auVar5._0_8_;
      if (lVar3 != 0) goto LAB_0020008d;
      bVar1 = true;
    }
                    /* try { // try from 00200076 to 0020007b has its CatchHandler @ 002000ef */
    _ZN6uucore4mods5error13get_exit_code17he41365fe4dc666e7E();
    if (!bVar1) {
      _ZN4core3ptr53drop_in_place_LT_uu_tail__follow__watch__Observer_GT_17h60ddef1d36aee139E
                (local_150);
    }
    lVar3 = 0;
    uVar4 = unaff_R13;
  }
  else {
LAB_001fff27:
    lVar3 = auVar5._0_8_;
    _ZN4core3ptr53drop_in_place_LT_uu_tail__follow__watch__Observer_GT_17h60ddef1d36aee139E
              (local_150);
    uVar4 = auVar5._8_8_;
  }
LAB_0020008d:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar3;
  return auVar5;
}