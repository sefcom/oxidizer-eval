__int64 __fastcall sniffnet::chart::manage_chart_data::update_series(_QWORD *a1, char a2, char a3, float a4, float a5)
{
  __int64 result; // rax
  _DWORD v7[5]; // [rsp+Ch] [rbp-5Ch] BYREF
  __int128 v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+30h] [rbp-38h]
  _BYTE v10[48]; // [rsp+38h] [rbp-30h] BYREF

  *(float *)&v7[3] = a4;
  *(float *)&v7[4] = a5;
  v7[0] = 2;
  if ( a1[2] > 0x1DuLL )
    alloc::vec::Vec<T,A>::remove(&v8, a1);
  result = splines::spline::Spline<T,V>::add(a1, v7);
  if ( !a2 )
  {
    result = alloc::vec::Vec<T,A>::push(a1 + 3, &off_2DFED78, a4, a5);
    if ( a3 )
    {
      sniffnet::chart::manage_chart_data::reduce_all_time_data(a1 + 3);
      core::iter::traits::iterator::Iterator::collect(v10, a1[4], a1[4] + 8LL * a1[5]);
      splines::spline::Spline<T,V>::from_vec(&v8, v10);
      core::ptr::drop_in_place<tiny_skia::shaders::gradient::Gradient>(*a1, a1[1]);
      result = v9;
      a1[2] = v9;
      *(_OWORD *)a1 = v8;
    }
  }
  return result;
}