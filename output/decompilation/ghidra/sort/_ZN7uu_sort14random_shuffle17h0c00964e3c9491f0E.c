undefined _ZN7uu_sort14random_shuffle17h0c00964e3c9491f0E
                    (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  ulong uVar1;
  undefined uVar2;
  undefined local_3a;
  undefined local_39;
  ulong local_38;
  
  local_38 = 0xcbf29ce484222325;
  _ZN53__LT_fnv__FnvHasher_u20_as_u20_core__hash__Hasher_GT_5write17h1f40931822b5a752E
            (&local_38,param_1,param_2);
  local_3a = 0xff;
  _ZN53__LT_fnv__FnvHasher_u20_as_u20_core__hash__Hasher_GT_5write17h1f40931822b5a752E
            (&local_38,&local_3a,1);
  _ZN4core4hash5impls52__LT_impl_u20_core__hash__Hash_u20_for_u20__RF_T_GT_4hash17h8c5e13fb85b9f364E
            (param_5,&local_38);
  uVar1 = local_38;
  local_38 = 0xcbf29ce484222325;
  _ZN53__LT_fnv__FnvHasher_u20_as_u20_core__hash__Hasher_GT_5write17h1f40931822b5a752E
            (&local_38,param_3,param_4);
  local_39 = 0xff;
  _ZN53__LT_fnv__FnvHasher_u20_as_u20_core__hash__Hasher_GT_5write17h1f40931822b5a752E
            (&local_38,&local_39,1);
  _ZN4core4hash5impls52__LT_impl_u20_core__hash__Hash_u20_for_u20__RF_T_GT_4hash17h8c5e13fb85b9f364E
            (param_5,&local_38);
  uVar2 = 0xff;
  if (local_38 <= uVar1) {
    uVar2 = uVar1 != local_38;
  }
  return uVar2;
}