undefined8 __rustcall uu_shuf::NonrepeatingIterator::produce(long *param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulong local_58;
  long *local_48;
  undefined local_40 [24];
  
  if (*param_1 == 0) {
    lVar1 = param_1[3];
    if (lVar1 == 0) {
      core::option::unwrap_failed(&PTR_DAT_00237d20);
LAB_001c1b62:
                    /* try { // try from 001c1b62 to 001c1b7a has its CatchHandler @ 001c1b9f */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_0011f2fe,0x39,&PTR_DAT_00237d08);
    }
    param_1[3] = lVar1 + -1;
    uVar3 = *(undefined8 *)(param_1[2] + -8 + lVar1 * 8);
  }
  else {
    do {
      lVar1 = param_1[7];
      _<core::ops::range::RangeInclusive<Idx>as_core::clone::Clone>::clone(&local_68,param_1 + 8);
      uVar3 = rand::rng::Rng::gen_range(lVar1,&local_68);
      cVar2 = hashbrown::map::HashMap<K,V,S,A>::insert(param_1,uVar3);
    } while (cVar2 != '\0');
    uVar4 = (param_1[9] - param_1[8]) + 1;
    uVar5 = 0xffffffffffffffff;
    if (uVar4 != 0) {
      uVar5 = uVar4;
    }
    if (uVar5 >> 2 <= (ulong)param_1[3]) {
      _<core::ops::range::RangeInclusive<Idx>as_core::clone::Clone>::clone(local_40,param_1 + 8);
      local_48 = param_1;
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&local_80,&local_48);
      if (local_70 < (ulong)param_1[6]) goto LAB_001c1b62;
                    /* try { // try from 001c1ad8 to 001c1af2 has its CatchHandler @ 001c1b9f */
      _<[T]as_rand::seq::SliceRandom>::partial_shuffle
                (&local_68,CONCAT44(uStack_74,uStack_78),local_70,param_1 + 7);
      ::alloc::vec::Vec<T,A>::truncate(&local_80,param_1[6]);
      local_58 = local_70;
      local_68 = local_80;
      uStack_64 = uStack_7c;
      uStack_60 = uStack_78;
      uStack_5c = uStack_74;
                    /* try { // try from 001c1b07 to 001c1b0e has its CatchHandler @ 001c1b7b */
      core::ptr::drop_in_place<uu_shuf::NumberSet>(param_1);
      *param_1 = 0;
      param_1[1] = CONCAT44(uStack_64,local_68);
      param_1[2] = CONCAT44(uStack_5c,uStack_60);
      param_1[3] = local_58;
    }
  }
  return uVar3;
}