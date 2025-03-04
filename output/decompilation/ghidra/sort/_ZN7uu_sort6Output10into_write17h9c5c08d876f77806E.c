undefined8 _ZN7uu_sort6Output10into_write17h9c5c08d876f77806E(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  long local_18;
  
  if (*param_2 == -0x8000000000000000) {
    uVar1 = _ZN3std2io5stdio6stdout17h077da66234850927E();
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h86b0794f31e6b95fE(uVar1);
    ppuVar2 = (undefined **)&DAT_002ff6e8;
  }
  else {
    local_18 = param_2[2];
    local_28 = *(undefined4 *)param_2;
    uStack_24 = *(undefined4 *)((long)param_2 + 4);
    uStack_20 = *(undefined4 *)(param_2 + 1);
    uStack_1c = *(undefined4 *)((long)param_2 + 0xc);
    local_34 = *(undefined4 *)(param_2 + 3);
                    /* try { // try from 0021e5d3 to 0021e5ee has its CatchHandler @ 0021e62c */
    local_30 = _ZN3std2fs4File7set_len17hd21acd2eeb028efbE(&local_34,0);
    _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hf659f53abfc6eaaaE
              (&local_30);
                    /* try { // try from 0021e5f3 to 0021e5f7 has its CatchHandler @ 0021e627 */
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hea03e04285d5c204E(local_34);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44b8f79efaf87542E(&local_28);
    ppuVar2 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hbb578aa8d27e7bc5E_002ff738;
  }
  _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17h88a23f20aed6b056E
            (param_1,0x2000,uVar1,ppuVar2);
  return param_1;
}