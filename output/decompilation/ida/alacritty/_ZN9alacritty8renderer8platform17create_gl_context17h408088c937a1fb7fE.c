_OWORD *__fastcall alacritty::renderer::platform::create_gl_context(_OWORD *a1, __int64 a2, __int64 a3, __int128 *a4)
{
  __int64 v5; // rdx
  int v6; // ebx
  int v7; // r12d
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  _OWORD *result; // rax
  __int128 v13; // [rsp+10h] [rbp-2A8h] BYREF
  __int128 v14; // [rsp+20h] [rbp-298h]
  __m256i v15; // [rsp+30h] [rbp-288h]
  __int128 v16; // [rsp+50h] [rbp-268h] BYREF
  __int128 v17; // [rsp+60h] [rbp-258h]
  __m256i v18; // [rsp+70h] [rbp-248h]
  _OWORD *v19; // [rsp+90h] [rbp-228h]
  __int128 v20; // [rsp+98h] [rbp-220h] BYREF
  int v21; // [rsp+A8h] [rbp-210h]
  int v22; // [rsp+C0h] [rbp-1F8h]
  __int16 v23; // [rsp+C4h] [rbp-1F4h]
  _BYTE v24[9]; // [rsp+C6h] [rbp-1F2h]
  char v25; // [rsp+CFh] [rbp-1E9h]
  __int128 v26; // [rsp+D0h] [rbp-1E8h] BYREF
  __int128 v27; // [rsp+E0h] [rbp-1D8h]
  __int128 v28; // [rsp+F0h] [rbp-1C8h]
  __int64 v29; // [rsp+100h] [rbp-1B8h]
  __int128 v30; // [rsp+110h] [rbp-1A8h]
  __int128 v31; // [rsp+120h] [rbp-198h]
  __int64 v32; // [rsp+130h] [rbp-188h]
  __int128 v33; // [rsp+140h] [rbp-178h]
  __int128 v34; // [rsp+150h] [rbp-168h]
  __int64 v35; // [rsp+160h] [rbp-158h]
  __int128 v36; // [rsp+170h] [rbp-148h]
  __int128 v37; // [rsp+180h] [rbp-138h]
  __int64 v38; // [rsp+190h] [rbp-128h]
  _OWORD v39[3]; // [rsp+198h] [rbp-120h] BYREF
  __int64 v40; // [rsp+1C8h] [rbp-F0h]
  _QWORD v41[2]; // [rsp+1D0h] [rbp-E8h] BYREF
  __int128 v42; // [rsp+1E0h] [rbp-D8h]
  __int128 v43; // [rsp+1F0h] [rbp-C8h]
  __int64 v44; // [rsp+200h] [rbp-B8h]
  int v45; // [rsp+208h] [rbp-B0h]
  __int64 v46; // [rsp+20Ch] [rbp-ACh]
  __int32 v47; // [rsp+214h] [rbp-A4h]
  __int128 v48; // [rsp+218h] [rbp-A0h]
  __int128 v49; // [rsp+228h] [rbp-90h]
  __int64 v50; // [rsp+238h] [rbp-80h]
  int v51; // [rsp+240h] [rbp-78h]
  __int64 v52; // [rsp+244h] [rbp-74h]
  __int32 v53; // [rsp+24Ch] [rbp-6Ch]
  __int128 v54; // [rsp+250h] [rbp-68h]
  __int128 v55; // [rsp+260h] [rbp-58h]
  __int64 v56; // [rsp+270h] [rbp-48h]
  int v57; // [rsp+278h] [rbp-40h]
  __int16 v58; // [rsp+27Ch] [rbp-3Ch]
  char v59; // [rsp+27Eh] [rbp-3Ah]
  __int64 v60; // [rsp+27Fh] [rbp-39h]
  char v61; // [rsp+287h] [rbp-31h]

  *(_QWORD *)&v20 = 2LL;
  v21 = 16;
  v22 = 2;
  LOBYTE(v23) = 1;
  HIBYTE(v23) = (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4;
  *(_WORD *)v24 = 2;
  v24[2] = 4;
  v5 = 112LL;
  if ( *(_BYTE *)a2 )
    v5 = 92LL;
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 8) + v5) & 1) != 0 )
    v24[1] = 3;
  <glutin::context::ContextAttributes as core::clone::Clone>::clone(&v13, &v20);
  v30 = v13;
  v46 = *(__int64 *)((char *)&v15.m256i_i64[1] + 4);
  v47 = v15.m256i_i32[5];
  v31 = *a4;
  v32 = *((_QWORD *)a4 + 2);
  <glutin::context::ContextAttributes as core::clone::Clone>::clone(&v13, &v20);
  v33 = v13;
  v52 = *(__int64 *)((char *)&v15.m256i_i64[1] + 4);
  v53 = v15.m256i_i32[5];
  v34 = *a4;
  v35 = *((_QWORD *)a4 + 2);
  v36 = v20;
  v60 = *(_QWORD *)&v24[1];
  v61 = v25;
  v37 = *a4;
  v38 = *((_QWORD *)a4 + 2);
  v41[0] = 0LL;
  v41[1] = 3LL;
  v42 = v30;
  v43 = v31;
  v44 = v32;
  v45 = 50528512;
  v50 = v35;
  v49 = v34;
  v48 = v13;
  v51 = 131329;
  v56 = v38;
  v55 = v37;
  v54 = v20;
  v57 = 16908544;
  v58 = v23;
  v59 = 1;
  core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v13, v41);
  if ( (_DWORD)v13 == 3 )
    core::option::unwrap_failed(&off_883908);
  v19 = a1;
  v29 = v15.m256i_i64[2];
  v28 = *(_OWORD *)v15.m256i_i8;
  v27 = v14;
  v26 = v13;
  <glutin::display::Display as glutin::display::GlDisplay>::create_context(&v16, a2, a3, &v26);
  v6 = v16;
  core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v39, v41);
  if ( v6 != 2 && *(_QWORD *)&v39[0] != 3LL )
  {
    do
    {
      v29 = v40;
      v28 = v39[2];
      v27 = v39[1];
      v26 = v39[0];
      <glutin::display::Display as glutin::display::GlDisplay>::create_context(&v13, a2, a3, &v26);
      core::ptr::drop_in_place<core::result::Result<glutin::context::NotCurrentContext,glutin::error::Error>>(&v16);
      v18 = v15;
      v17 = v14;
      v16 = v13;
      v7 = v13;
      core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v39, v41);
    }
    while ( v7 != 2 && *(_QWORD *)&v39[0] != 3LL );
  }
  v8 = v16;
  v9 = v17;
  v10 = *(_OWORD *)v18.m256i_i8;
  result = v19;
  v19[3] = *(_OWORD *)&v18.m256i_u64[2];
  result[2] = v10;
  result[1] = v9;
  *result = v8;
  return result;
}