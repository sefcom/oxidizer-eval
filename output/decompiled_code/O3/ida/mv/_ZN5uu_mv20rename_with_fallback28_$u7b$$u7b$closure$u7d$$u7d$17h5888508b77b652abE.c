__int64 __fastcall uu_mv::rename_with_fallback::{{closure}}(__int64 a1, __int128 *a2)
{
  __int128 v3; // [rsp+0h] [rbp-28h] BYREF
  __int64 v4; // [rsp+10h] [rbp-18h]

  indicatif::progress_bar::ProgressBar::set_position(a1, *((_QWORD *)a2 + 3));
  v4 = *((_QWORD *)a2 + 2);
  v3 = *a2;
  return indicatif::progress_bar::ProgressBar::set_message(a1, &v3);
}
