byte _ZN5uu_mv12is_empty_dir17h380343aaab058219E(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 local_58;
  char local_50;
  undefined8 local_48 [6];
  undefined8 local_18;
  char local_10;
  
  _ZN3std2fs8read_dir17h17a15da7deb8ae8aE(&local_58,param_1,param_2);
  if (local_50 == '\x02') {
    local_48[0] = local_58;
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h96abb429d2198cc4E(local_48);
    bVar1 = 0;
  }
  else {
    local_18 = local_58;
    local_10 = local_50;
    local_48[0] = 2;
                    /* try { // try from 0018df0e to 0018df17 has its CatchHandler @ 0018df35 */
    _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17h8aa5c01daaeebc96E(local_48,&local_18);
    bVar1 = (byte)local_48[0] ^ 1;
    _ZN4core3ptr85drop_in_place_LT_core__iter__adapters__peekable__Peekable_LT_std__fs__ReadDir_GT__GT_17hacabfff80385f592E
              (local_48);
  }
  return bVar1 & 1;
}