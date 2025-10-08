unsigned __int64 __fastcall sniffnet::chart::manage_chart_data::reduce_all_time_data(_QWORD *a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdi
  __int128 v4; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+10h] [rbp-38h]
  __int128 v6; // [rsp+18h] [rbp-30h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]

  result = a1[2];
  if ( result >= 0x97 )
  {
    do
    {
      *(_QWORD *)&v6 = 0LL;
      *((_QWORD *)&v6 + 1) = 4LL;
      v7 = 0LL;
      v3 = a1[1];
      *(_QWORD *)&v4 = a1;
      *((_QWORD *)&v4 + 1) = &v6;
      v5 = 0LL;
      ((void (__fastcall *)(__int64, unsigned __int64, __int128 *))<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold)(
        v3,
        v3 + 8 * result,
        &v4);
      v5 = v7;
      v4 = v6;
      core::ptr::drop_in_place<alloc::vec::Vec<font_types::point::Point<font_types::fixed::F26Dot6>>>(*a1, a1[1]);
      a1[2] = v5;
      *(_OWORD *)a1 = v4;
      result = a1[2];
    }
    while ( result > 0x96 );
  }
  return result;
}