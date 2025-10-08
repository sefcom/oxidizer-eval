undefined8
_ZN4just8justfile8Justfile9get_alias17h42732d97284ae40eE
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 extraout_RDX;
  byte abStack_20 [8];
  undefined8 uStack_18;
  undefined8 uStack_8;
  
  if (param_1 == 0) {
    return 0;
  }
  _ZN5alloc11collections5btree6search142__LT_impl_u20_alloc__collections__btree__node__NodeRef_LT_BorrowType_C_K_C_V_C_alloc__collections__btree__node__marker__LeafOrInternal_GT__GT_11search_tree17h60caf39b9cd1cdd1E
            (abStack_20,param_1,param_2,param_3,param_4);
  if ((abStack_20[0] & 1) != 0) {
    return 0;
  }
  _ZN5alloc11collections5btree4node173Handle_LT_alloc__collections__btree__node__NodeRef_LT_alloc__collections__btree__node__marker__Immut_C_K_C_V_C_NodeType_GT__C_alloc__collections__btree__node__marker__KV_GT_7into_kv17h98370bfbea0c5cffE
            (uStack_18,uStack_8);
  return extraout_RDX;
}