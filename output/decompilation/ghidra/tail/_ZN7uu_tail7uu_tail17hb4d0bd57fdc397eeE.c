undefined  [16] _ZN7uu_tail7uu_tail17hb4d0bd57fdc397eeE(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 unaff_RBP;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined local_16a;
  undefined local_169;
  undefined local_168 [8];
  long local_160;
  long local_158;
  undefined local_150 [144];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  
  local_16a = *(undefined *)(param_1 + 0x4a);
  local_169 = 1;
  _ZN7uu_tail6follow5watch8Observer4from17h64caa446bdf8d8a2E(local_150,param_1);
                    /* try { // try from 001a68c1 to 001a68cb has its CatchHandler @ 001a6a95 */
  auVar6 = _ZN7uu_tail6follow5watch8Observer5start17he8e1aec2764f4c71E(local_150,param_1);
  if (auVar6._0_8_ == 0) {
                    /* try { // try from 001a68ee to 001a68f7 has its CatchHandler @ 001a6a95 */
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h262b5fbaa7a6f616E
              (local_168,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    if (local_158 != 0) {
      lVar4 = local_158 * 0x30;
      lVar5 = local_160;
      do {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha6b2ce04d4e70875E
                  (&local_c0,&DAT_00124c84,10);
        uVar1 = local_b8;
        unaff_RBP = local_c0;
                    /* try { // try from 001a6979 to 001a6980 has its CatchHandler @ 001a6a9a */
        cVar2 = _ZN59__LT_std__path__PathBuf_u20_as_u20_core__cmp__PartialEq_GT_2eq17h35303d53f5dfabe5E
                          (*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x28),local_b8,
                           local_b0);
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h23581330bde049a4E(unaff_RBP,uVar1);
        if (cVar2 == '\0') {
          auVar6 = _ZN7uu_tail9tail_file17h810e2a2864f554f6E
                             (param_1,&local_16a,lVar5,*(undefined8 *)(lVar5 + 0x20),
                              *(undefined8 *)(lVar5 + 0x28),local_150,0);
        }
        else {
                    /* try { // try from 001a6994 to 001a69d4 has its CatchHandler @ 001a6aaa */
          auVar6 = _ZN7uu_tail10tail_stdin17h9b2bb4973e46bb0aE(param_1,&local_16a,lVar5,local_150);
        }
        if (auVar6._0_8_ != 0) {
          _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_uu_tail__paths__Input_GT__GT_17hc1e8b2989ad93a4fE
                    (local_168);
          goto LAB_001a68d7;
        }
        lVar5 = lVar5 + 0x30;
        lVar4 = lVar4 + -0x30;
      } while (lVar4 != 0);
    }
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_uu_tail__paths__Input_GT__GT_17hc1e8b2989ad93a4fE
              (local_168);
    uVar3 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
    if ((*(char *)(param_1 + 0x4c) != '\x02') &&
       ((cVar2 = (*(code *)
                   PTR__ZN7uu_tail4args8Settings14has_only_stdin17hed926c70477a379cE_0027d768)
                           (param_1), cVar2 == '\0' || (*(int *)(param_1 + 0x44) != 0)))) {
      (*(code *)PTR_memcpy_0027d2f0)(&local_c0,local_150,0x90);
      auVar6 = _ZN7uu_tail6follow5watch6follow17hb7449fea675f32afE(&local_c0,param_1);
      if (auVar6._0_8_ != 0) {
        return auVar6;
      }
      uVar3 = 0;
    }
                    /* try { // try from 001a6a5b to 001a6a60 has its CatchHandler @ 001a6a8b */
    (*(code *)PTR__ZN6uucore4mods5error13get_exit_code17h4ce6cf124c2ef658E_0027d368)();
    if ((char)uVar3 != '\0') {
      _ZN4core3ptr53drop_in_place_LT_uu_tail__follow__watch__Observer_GT_17hdbfc2663e25cdabaE
                (local_150);
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar3;
    auVar6 = auVar6 << 0x40;
  }
  else {
LAB_001a68d7:
    _ZN4core3ptr53drop_in_place_LT_uu_tail__follow__watch__Observer_GT_17hdbfc2663e25cdabaE
              (local_150);
  }
  return auVar6;
}