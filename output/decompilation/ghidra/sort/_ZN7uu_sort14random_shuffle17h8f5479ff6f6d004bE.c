char _ZN7uu_sort14random_shuffle17h8f5479ff6f6d004bE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  ulong uVar1;
  undefined local_49;
  ulong local_48;
  ulong local_40 [2];
  
  local_48 = 0xcbf29ce484222325;
  _ZN53__LT_fnv__FnvHasher_u20_as_u20_core__hash__Hasher_GT_5write17h3b0e12ffd294463dE
            (&local_48,param_1,param_2);
  local_49 = 0xff;
  _ZN53__LT_fnv__FnvHasher_u20_as_u20_core__hash__Hasher_GT_5write17h3b0e12ffd294463dE
            (&local_48,&local_49,1);
  local_40[1] = 0x10;
  _ZN53__LT_fnv__FnvHasher_u20_as_u20_core__hash__Hasher_GT_5write17h3b0e12ffd294463dE
            (&local_48,local_40 + 1,8);
  _ZN53__LT_fnv__FnvHasher_u20_as_u20_core__hash__Hasher_GT_5write17h3b0e12ffd294463dE
            (&local_48,param_5,0x10);
  uVar1 = local_48;
  local_40[0] = 0xcbf29ce484222325;
  _ZN53__LT_fnv__FnvHasher_u20_as_u20_core__hash__Hasher_GT_5write17h3b0e12ffd294463dE
            (local_40,param_3,param_4);
  local_48 = CONCAT71(local_48._1_7_,0xff);
  _ZN53__LT_fnv__FnvHasher_u20_as_u20_core__hash__Hasher_GT_5write17h3b0e12ffd294463dE
            (local_40,&local_48,1);
  local_48 = 0x10;
  _ZN53__LT_fnv__FnvHasher_u20_as_u20_core__hash__Hasher_GT_5write17h3b0e12ffd294463dE
            (local_40,&local_48,8);
  _ZN53__LT_fnv__FnvHasher_u20_as_u20_core__hash__Hasher_GT_5write17h3b0e12ffd294463dE
            (local_40,param_5,0x10);
  return (uVar1 >= local_40[0] && uVar1 != local_40[0]) - (uVar1 < local_40[0]);
}