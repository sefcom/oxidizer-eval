void __rustcall uu_wc::WcError::files_disabled(undefined8 *param_1)

{
  long local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  std::sys::os_str::bytes::Slice::to_string_lossy(&local_40);
  if (local_40 == -0x8000000000000000) {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_28,uStack_38,local_30);
  }
  else {
    local_18 = local_30;
    local_28 = local_40;
    uStack_20 = uStack_38;
  }
  param_1[3] = local_18;
  param_1[1] = local_28;
  param_1[2] = uStack_20;
  *param_1 = 0x8000000000000001;
  return;
}