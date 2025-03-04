undefined (*) [16]
_ZN7uu_tail6follow5files12FileHandling9tail_file17h8ac57e4964e40afaE
          (undefined (*param_1) [16],undefined8 *param_2,undefined8 param_3,undefined8 param_4,
          undefined param_5)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  long lStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined local_50 [40];
  
  local_130 = 0xffffffffffffffff;
  local_128 = 0;
  local_150 = 0;
  local_148 = 8;
  local_140 = 0;
  lStack_138 = 0;
                    /* try { // try from 0020ec1a to 0020ec9d has its CatchHandler @ 0020ed9b */
  lVar2 = _ZN7uu_tail6follow5files12FileHandling7get_mut17h1a80ce1ee4fcf7dcE
                    (param_2,param_3,param_4);
  if (*(long *)(lVar2 + 200) == 0) {
LAB_0020ed64:
    (*param_1)[8] = 0;
  }
  else {
    auVar4 = _ZN7uu_tail6chunks16BytesChunkBuffer4fill17h530d2248581353b2E(&local_150,lVar2 + 200);
    if (auVar4._0_8_ != 0) {
LAB_0020ec4e:
      *param_1 = auVar4;
      goto LAB_0020ed6f;
    }
    if (lStack_138 == 0) goto LAB_0020ed64;
    cVar1 = _ZN7uu_tail6follow5files12FileHandling12needs_header17h44ee2212a23b7f03E
                      (param_2,param_3,param_4,param_5);
    if (cVar1 != '\0') {
      lVar2 = _ZN7uu_tail6follow5files12FileHandling3get17ha1f26ea8b12ea1ffE
                        (param_2,param_3,param_4);
      _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
                (&local_108,lVar2 + 0xb0);
                    /* try { // try from 0020ecad to 0020ecb1 has its CatchHandler @ 0020ed8c */
      _ZN7uu_tail5paths13HeaderPrinter5print17h45f27ae0b4b499e5E(param_2 + 9,uStack_100,local_f8);
                    /* try { // try from 0020ecb2 to 0020ed5d has its CatchHandler @ 0020ed9b */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4e81f59885851d09E(&local_108);
    }
    local_158 = _ZN3std2io5stdio6stdout17h077da66234850927E();
    uVar3 = _ZN3std2io5stdio6Stderr4lock17h890f7962a170fc90E(&local_158);
    _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17haf7bea51889604aaE
              (local_50,0x2000,uVar3);
    auVar4 = _ZN7uu_tail6chunks16BytesChunkBuffer5print17h3c452982a4c37be4E(&local_150,local_50);
    if (auVar4._0_8_ != 0) goto LAB_0020ec4e;
    _ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h0549813f23b52483E
              (&local_120,param_3,param_4);
    local_f8 = param_2[2];
    local_108 = *param_2;
    uStack_100 = param_2[1];
    *(undefined4 *)param_2 = local_120;
    *(undefined4 *)((long)param_2 + 4) = uStack_11c;
    *(undefined4 *)(param_2 + 1) = uStack_118;
    *(undefined4 *)((long)param_2 + 0xc) = uStack_114;
    param_2[2] = local_110;
    _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h63b24af75b14f95fE
              (&local_108);
    local_108 = 2;
    _ZN7uu_tail6follow5files12FileHandling15update_metadata17h4aaaeb16ccacaf37E
              (param_2,param_3,param_4,&local_108);
    (*param_1)[8] = 1;
  }
  *(undefined8 *)*param_1 = 0;
LAB_0020ed6f:
  _ZN4core3ptr54drop_in_place_LT_uu_tail__chunks__BytesChunkBuffer_GT_17h83b3f06568852970E
            (&local_150);
  return param_1;
}