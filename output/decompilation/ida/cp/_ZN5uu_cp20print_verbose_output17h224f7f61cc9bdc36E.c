__int64 __fastcall uu_cp::print_verbose_output(
        unsigned __int8 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int8 v7; // [rsp+Fh] [rbp-29h] BYREF
  _QWORD v8[5]; // [rsp+10h] [rbp-28h] BYREF

  v7 = a1;
  if ( !a2 )
    return uu_cp::print_paths(a1, a3, a4, a5, a6);
  v8[0] = &v7;
  v8[1] = a3;
  v8[2] = a4;
  v8[3] = a5;
  v8[4] = a6;
  return indicatif::progress_bar::ProgressBar::suspend(*a2, v8);
}