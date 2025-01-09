void __rustcall uu_split::handle_obsolete(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined local_82;
  undefined local_81;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined local_38 [40];
  
  local_80 = 0x8000000000000000;
  local_82 = 0;
  local_81 = 0;
  local_68 = &local_80;
  local_60 = &local_82;
  local_58 = &local_81;
  core::iter::traits::iterator::Iterator::filter_map(local_38,param_2,param_3,&local_68);
                    /* try { // try from 00175c73 to 00175c7f has its CatchHandler @ 00175cab */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_50,local_38);
  param_1[5] = local_70;
  param_1[3] = local_80;
  param_1[4] = uStack_78;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  param_1[2] = local_40;
  return;
}