__int64 __fastcall sniffnet::gui::styles::types::color_remote::deserialize_color(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  char *v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  char *v7; // rdx
  __int64 v8; // rcx
  __int128 v9; // kr10_16
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  int *v12; // rax
  int v13; // xmm1_4
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  char **v24; // rdx
  __int64 v25; // rdi
  __int128 v26; // [rsp+0h] [rbp-1B8h] BYREF
  char *v27; // [rsp+10h] [rbp-1A8h]
  __int128 v28; // [rsp+20h] [rbp-198h] BYREF
  char *v29; // [rsp+30h] [rbp-188h]
  __int128 v30; // [rsp+38h] [rbp-180h]
  __int128 v31; // [rsp+48h] [rbp-170h]
  __int128 v32; // [rsp+58h] [rbp-160h]
  __int128 v33; // [rsp+68h] [rbp-150h]
  __m256i v34; // [rsp+78h] [rbp-140h] BYREF
  __int128 v35; // [rsp+98h] [rbp-120h]
  __int128 v36; // [rsp+A8h] [rbp-110h]
  __int128 v37; // [rsp+B8h] [rbp-100h]
  __int64 v38; // [rsp+C8h] [rbp-F0h]
  __int128 v39; // [rsp+E0h] [rbp-D8h] BYREF
  __int128 v40; // [rsp+F0h] [rbp-C8h]
  __int128 v41; // [rsp+100h] [rbp-B8h]
  __int128 v42; // [rsp+110h] [rbp-A8h]
  _BYTE v43[24]; // [rsp+128h] [rbp-90h] BYREF
  unsigned __int64 v44; // [rsp+140h] [rbp-78h]
  __int128 v45; // [rsp+148h] [rbp-70h]
  __int128 v46; // [rsp+158h] [rbp-60h]
  __int128 v47; // [rsp+168h] [rbp-50h]
  __int64 v48; // [rsp+178h] [rbp-40h]
  _BYTE v49[56]; // [rsp+180h] [rbp-38h] BYREF

  <serde_core::de::value::UsizeDeserializer<E> as serde_core::de::Deserializer>::deserialize_string(&v34);
  result = v34.m256i_i64[0];
  v28 = *(_OWORD *)&v34.m256i_u64[1];
  v29 = (char *)v34.m256i_i64[3];
  if ( v34.m256i_i64[0] != 2 )
  {
    *(_QWORD *)(a1 + 80) = v38;
    v14 = v35;
    v15 = v36;
    *(_OWORD *)(a1 + 64) = v37;
    *(_OWORD *)(a1 + 48) = v15;
    *(_OWORD *)(a1 + 32) = v14;
    *(_QWORD *)(a1 + 24) = v29;
    *(_OWORD *)(a1 + 8) = v28;
    *(_QWORD *)a1 = result;
    return result;
  }
  v26 = v28;
  v3 = v29;
  v27 = v29;
  if ( v29 == byte_9 || v29 == &byte_7 )
  {
    LODWORD(v28) = 0;
    v4 = core::char::methods::encode_utf8_raw(35LL, &v28, 4LL);
    v6 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v4, v5, *((_QWORD *)&v26 + 1), v3);
    if ( v6 )
      goto LABEL_6;
    sniffnet::gui::styles::types::color_remote::deserialize_color::{{closure}}(&v28, *((_QWORD *)&v26 + 1), v3);
    v6 = *((_QWORD *)&v28 + 1);
    v8 = v28;
    v7 = v29;
    v39 = v30;
    v40 = v31;
    v41 = v32;
    v42 = v33;
    if ( (_QWORD)v28 == 2LL )
    {
LABEL_6:
      core::iter::adapters::step_by::StepBy<I>::new(v49, v6, &v7[v6]);
      *(_QWORD *)&v39 = *((_QWORD *)&v26 + 1);
      *((_QWORD *)&v39 + 1) = &v27[*((_QWORD *)&v26 + 1)];
      *(_QWORD *)&v40 = 2LL;
      core::iter::adapters::step_by::StepBy<I>::new(&v28, &v39);
      core::iter::traits::iterator::Iterator::zip(&v34.m256i_u64[1], v49, &v28);
      v34.m256i_i64[0] = (__int64)&v26;
      core::iter::traits::iterator::Iterator::collect(v43, &v34);
      v9 = *(_OWORD *)v43;
      v10 = *(_QWORD *)&v43[16];
      v11 = v44;
      if ( *(_QWORD *)v43 == 2LL )
      {
        if ( v44 )
        {
          if ( v44 == 1 )
          {
            v24 = &off_2DFF268;
            v25 = 1LL;
          }
          else
          {
            if ( v44 >= 3 )
            {
              v12 = &dword_26B1B8;
              if ( v44 != 3 )
                v12 = (int *)(*(_QWORD *)&v43[16] + 12LL);
              v13 = *v12;
              *(_DWORD *)(a1 + 8) = **(_DWORD **)&v43[16];
              *(_QWORD *)(a1 + 12) = *(_QWORD *)(v10 + 4);
              *(_DWORD *)(a1 + 20) = v13;
              *(_QWORD *)a1 = 2LL;
              core::ptr::drop_in_place<alloc::vec::Vec<f32>>(*((_QWORD *)&v9 + 1), v10);
              return core::ptr::drop_in_place<alloc::string::String>(&v26);
            }
            v24 = &off_2DFF280;
            v25 = 2LL;
          }
        }
        else
        {
          v24 = &off_2DFF250;
          v25 = 0LL;
        }
        core::panicking::panic_bounds_check(v25, v25, v24);
      }
      *(_QWORD *)(a1 + 80) = v48;
      v19 = v45;
      v20 = v46;
      *(_OWORD *)(a1 + 64) = v47;
      *(_OWORD *)(a1 + 48) = v20;
      *(_OWORD *)(a1 + 32) = v19;
      *(_OWORD *)a1 = v9;
      *(_QWORD *)(a1 + 16) = v10;
      *(_QWORD *)(a1 + 24) = v11;
    }
    else
    {
      v21 = v39;
      v22 = v40;
      v23 = v41;
      *(_OWORD *)(a1 + 72) = v42;
      *(_OWORD *)(a1 + 56) = v23;
      *(_OWORD *)(a1 + 40) = v22;
      *(_OWORD *)(a1 + 24) = v21;
      *(_QWORD *)a1 = v8;
      *(_QWORD *)(a1 + 8) = v6;
      *(_QWORD *)(a1 + 16) = v7;
    }
  }
  else
  {
    *(_QWORD *)&v28 = &unk_274FC0;
    *((_QWORD *)&v28 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v29 = "\t";
    *(_QWORD *)&v30 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v34.m256i_i64[0] = (__int64)&unk_2DFF230;
    v34.m256i_i64[1] = 2LL;
    *(_QWORD *)&v35 = 0LL;
    v34.m256i_i64[2] = (__int64)&v28;
    v34.m256i_i64[3] = 2LL;
    core::option::Option<T>::map_or_else(v43, 0LL, v1, &v34);
    v29 = *(char **)&v43[16];
    v28 = *(_OWORD *)v43;
    *(_OWORD *)v43 = *(_OWORD *)&v43[8];
    serde_core::de::Error::invalid_length(&v34, v3, v43);
    *(_QWORD *)(a1 + 80) = v38;
    *(_OWORD *)(a1 + 64) = v37;
    v16 = *(_OWORD *)v34.m256i_i8;
    v17 = *(_OWORD *)&v34.m256i_u64[2];
    v18 = v35;
    *(_OWORD *)(a1 + 48) = v36;
    *(_OWORD *)(a1 + 32) = v18;
    *(_OWORD *)(a1 + 16) = v17;
    *(_OWORD *)a1 = v16;
    core::ptr::drop_in_place<alloc::string::String>(&v28);
  }
  return core::ptr::drop_in_place<alloc::string::String>(&v26);
}