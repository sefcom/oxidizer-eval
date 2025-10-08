void _ZN7uu_tail6follow5files12FileHandling9tail_file17h556ffa1173747618E
               (undefined (*param_1) [16],undefined8 *param_2,undefined8 param_3,undefined8 param_4,
               undefined param_5)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  long lStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined local_118 [40];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  
  local_128 = 0xffffffffffffffff;
  local_120 = 0;
  local_148 = 0;
  local_140 = 8;
  local_138 = 0;
  lStack_130 = 0;
                    /* try { // try from 001a2ab9 to 001a2b3a has its CatchHandler @ 001a2c77 */
  lVar3 = _ZN7uu_tail6follow5files12FileHandling7get_mut17h1b58406c510d0063E
                    (param_2,param_3,param_4);
  if (*(long *)(lVar3 + 200) != 0) {
    auVar5 = _ZN7uu_tail6chunks16BytesChunkBuffer4fill17h87d2a1e91e32429eE
                       (&local_148,*(long *)(lVar3 + 200),*(undefined8 *)(lVar3 + 0xd0));
    if (auVar5._0_8_ != 0) {
      *param_1 = auVar5;
      goto LAB_001a2bc7;
    }
    if (lStack_130 != 0) {
      cVar2 = _ZN7uu_tail6follow5files12FileHandling12needs_header17hff0f2b81d091aff6E
                        (param_2,param_3,param_4,param_5);
      if (cVar2 != '\0') {
        lVar3 = _ZN7uu_tail6follow5files12FileHandling3get17hc0a1561a42a9610aE
                          (param_2,param_3,param_4);
        (*(code *)
          PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_0027d718
        )(&local_d8,lVar3 + 0xb0);
                    /* try { // try from 001a2b4d to 001a2b51 has its CatchHandler @ 001a2c45 */
        _ZN7uu_tail5paths13HeaderPrinter5print17hb9d96eaf79a3fd0eE(param_2 + 9,local_d0,local_c8);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha5fed46387940267E(&local_d8);
      }
                    /* try { // try from 001a2b5c to 001a2b7e has its CatchHandler @ 001a2c77 */
      local_d8 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_0027d3a8)();
      uVar4 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_0027d858)(&local_d8);
      _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17h263c6123d9aad573E
                (local_118,uVar4);
                    /* try { // try from 001a2b7f to 001a2ba8 has its CatchHandler @ 001a2c62 */
      auVar5 = _ZN7uu_tail6chunks16BytesChunkBuffer5print17h021bb420f35b3c38E(&local_148,local_118);
      if (auVar5._0_8_ == 0) {
        lVar3 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17ha1f2842950199d30E
                          (local_118);
        if (lVar3 == 0) {
                    /* try { // try from 001a2bdf to 001a2c2d has its CatchHandler @ 001a2c62 */
          (*(code *)
            PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_0027d848)
                    (&local_f0,param_3,param_4);
          uVar4 = *param_2;
          uVar1 = param_2[1];
          param_2[2] = local_e0;
          *(undefined4 *)param_2 = local_f0;
          *(undefined4 *)((long)param_2 + 4) = uStack_ec;
          *(undefined4 *)(param_2 + 1) = uStack_e8;
          *(undefined4 *)((long)param_2 + 0xc) = uStack_e4;
          _ZN4core3ptr46drop_in_place_LT_uu_tail__paths__InputKind_GT_17h046d3096d1779570E
                    (uVar4,uVar1);
          local_d8 = 2;
          _ZN7uu_tail6follow5files12FileHandling15update_metadata17h25061ac57dde0fedE
                    (param_2,param_3,param_4,&local_d8);
          (*param_1)[8] = 1;
          *(undefined8 *)*param_1 = 0;
                    /* try { // try from 001a2c39 to 001a2c42 has its CatchHandler @ 001a2c77 */
          _ZN4core3ptr94drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__StdoutLock_GT__GT_17h9abdbdfff854d5b5E
                    (local_118);
          goto LAB_001a2bc7;
        }
        auVar5 = (*(code *)
                   PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0027d808
                 )(lVar3);
      }
      *param_1 = auVar5;
                    /* try { // try from 001a2bb0 to 001a2bb9 has its CatchHandler @ 001a2c77 */
      _ZN4core3ptr94drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__StdoutLock_GT__GT_17h9abdbdfff854d5b5E
                (local_118);
      goto LAB_001a2bc7;
    }
  }
  (*param_1)[8] = 0;
  *(undefined8 *)*param_1 = 0;
LAB_001a2bc7:
  _ZN4core3ptr54drop_in_place_LT_uu_tail__chunks__BytesChunkBuffer_GT_17hdc77aa670acf7026E
            (&local_148);
  return;
}