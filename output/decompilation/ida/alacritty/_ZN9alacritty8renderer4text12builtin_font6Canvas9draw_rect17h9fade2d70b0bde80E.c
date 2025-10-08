unsigned __int64 __fastcall alacritty::renderer::text::builtin_font::Canvas::draw_rect(
        _QWORD *a1,
        float a2,
        float a3,
        float a4,
        float a5)
{
  __int64 v6; // rbx
  float v7; // xmm2_4
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r13
  __int64 v16; // rbp
  __int64 v17; // r15
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx

  v6 = (unsigned int)(int)a2;
  if ( a2 < 0.0 )
    v6 = 0LL;
  if ( a2 > 1.8446743e19 )
    v6 = -1LL;
  v7 = a4 + a2;
  v8 = (unsigned int)(int)v7;
  if ( v7 < 0.0 )
    v8 = 0LL;
  if ( v7 > 1.8446743e19 )
    v8 = -1LL;
  v9 = a1[3];
  v10 = core::cmp::Ord::min(v8, v9);
  v11 = (unsigned int)(int)a3;
  if ( a3 < 0.0 )
    v11 = 0LL;
  if ( a3 > 1.8446743e19 )
    v11 = -1LL;
  v12 = (unsigned int)(int)(float)(a5 + a3);
  if ( (float)(a5 + a3) < 0.0 )
    v12 = 0LL;
  if ( (float)(a5 + a3) > 1.8446743e19 )
    v12 = -1LL;
  result = core::cmp::Ord::min(v12, a1[4]);
  v14 = v11;
  v15 = result - v11;
  if ( result > v14 )
  {
    v16 = a1[1];
    v17 = a1[2];
    v18 = v9 * v14;
    v19 = v18 + v10;
    v20 = v18 + v6;
    do
    {
      v21 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(v20, v19, v16, v17);
      result = <[T] as core::slice::specialize::SpecFill<T>>::spec_fill(v21, v22, 0xFFFFFFLL);
      v19 += v9;
      v20 += v9;
      --v15;
    }
    while ( v15 );
  }
  return result;
}