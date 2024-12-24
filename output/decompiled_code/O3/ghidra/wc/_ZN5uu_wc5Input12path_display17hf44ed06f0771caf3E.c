undefined8 __rustcall uu_wc::Input::path_display(undefined8 param_1,long *param_2)

{
  if (*param_2 == -0x7fffffffffffffff) {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1,"standard input",0xe);
  }
  else {
    uucore::features::quoting_style::escape_name
              (param_1,param_2[1],param_2[2],
               &anon_2d62524804cc4b2f7247b138d4e0921f_19_llvm_17271959582280866971);
  }
  return param_1;
}