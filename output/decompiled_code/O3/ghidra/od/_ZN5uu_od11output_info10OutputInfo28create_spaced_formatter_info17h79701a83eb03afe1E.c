void __rustcall
uu_od::output_info::OutputInfo::create_spaced_formatter_info
          (undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  undefined8 *local_10;
  undefined8 *local_8;
  
  local_18 = param_2 + param_3 * 0x28;
  local_10 = &local_30;
  local_8 = &local_28;
  local_30 = param_4;
  local_28 = param_5;
  local_20 = param_2;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (param_1,&local_20);
  return;
}