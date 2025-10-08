void _ZN9uu_numfmt13handle_buffer17h8d59c98e3da551b3E(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 200) != '\0') {
    uVar1 = _ZN3std2io7BufRead5split17h0409658dc3119191E();
    _ZN9uu_numfmt22handle_buffer_iterator17h414c95f5f8eb45b9E(uVar1,param_2);
    return;
  }
  _ZN9uu_numfmt22handle_buffer_iterator17hfeb0cb0be5b9a655E();
  return;
}