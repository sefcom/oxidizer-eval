undefined8 * __rustcall
uu_od::open_input_peek_reader
          (undefined8 *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined local_40 [24];
  
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (local_40,param_2,param_2 + param_3 * 0x18);
  multifilereader::MultifileReader::new(param_1 + 2,local_40);
  *param_1 = param_5;
  param_1[1] = param_6;
  param_1[8] = param_4;
  param_1[9] = 0;
  param_1[10] = 1;
  param_1[0xb] = 0;
  return param_1;
}