void _ZN6uu_ptx17format_roff_field17h47edd2e5708f32dcE
               (undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long alStack_78 [2];
  long lStack_68;
  undefined8 auStack_60 [6];
  
  uStack_b8 = 0;
  uStack_b0 = 1;
  uStack_a8 = 0;
  puStack_a0 = param_1;
  lStack_98 = param_3;
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h77b0cfb9226a3587E
            (auStack_60);
  lVar4 = 0;
  while( true ) {
    _ZN81__LT_core__str__pattern__CharSearcher_u20_as_u20_core__str__pattern__Searcher_GT_10next_match17hefd99bf17fe91d78E
              (&lStack_90,auStack_60);
    if (lStack_90 == 0) break;
    _ZN4core3str4iter29MatchIndicesInternal_LT_P_GT_4next28__u7b__u7b_closure_u7d__u7d_17hb687ac82dc75dc73E
              (alStack_78,auStack_60[0],uStack_88,uStack_80);
    lVar2 = lStack_68;
    lVar1 = alStack_78[0];
    uVar3 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17hd2a6d42d8182f9ebE
                      (lVar4 + param_2,param_2 + alStack_78[0]);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h3f74110675a0c169E(&uStack_b8,uVar3);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h3f74110675a0c169E(&uStack_b8,&DAT_0015eced,2)
    ;
    lVar4 = lVar2 + lVar1;
  }
  uVar3 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17hd2a6d42d8182f9ebE
                    (lVar4 + param_2,lStack_98 + param_2);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h3f74110675a0c169E(&uStack_b8,uVar3);
  puStack_a0[2] = uStack_a8;
  *puStack_a0 = uStack_b8;
  puStack_a0[1] = uStack_b0;
  return;
}