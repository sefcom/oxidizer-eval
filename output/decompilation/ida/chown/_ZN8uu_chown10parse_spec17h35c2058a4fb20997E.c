__int64 __fastcall uu_chown::parse_spec(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 end; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 (__fastcall **v17)(); // rcx
  __int64 v18; // rdx
  __int64 result; // rax
  unsigned __int8 v20; // al
  unsigned int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // [rsp+0h] [rbp-138h] BYREF
  __int64 v27; // [rsp+8h] [rbp-130h]
  char **v28; // [rsp+10h] [rbp-128h] BYREF
  __int64 v29; // [rsp+18h] [rbp-120h]
  _QWORD *v30; // [rsp+20h] [rbp-118h]
  __int64 v31; // [rsp+28h] [rbp-110h]
  __int64 v32; // [rsp+30h] [rbp-108h]
  _QWORD v33[2]; // [rsp+40h] [rbp-F8h] BYREF
  _QWORD v34[3]; // [rsp+50h] [rbp-E8h] BYREF
  char v35; // [rsp+68h] [rbp-D0h]
  __m128d v36; // [rsp+70h] [rbp-C8h]
  __m128d v37; // [rsp+80h] [rbp-B8h]
  __int64 v38; // [rsp+98h] [rbp-A0h]
  _QWORD v39[2]; // [rsp+A0h] [rbp-98h] BYREF
  char v40[48]; // [rsp+B0h] [rbp-88h] BYREF
  __int16 v41; // [rsp+E0h] [rbp-58h]
  _BYTE v42[24]; // [rsp+E8h] [rbp-50h] BYREF
  int v43; // [rsp+100h] [rbp-38h]

  v7 = a1;
  HIDWORD(v26) = a4;
  if ( !(unsigned __int8)<char as core::slice::cmp::SliceContains>::slice_contains((char *)&v26 + 4) )
    core::panicking::panic(aAssertionFaile, 43LL, &off_F5FC0);
  <char as core::str::pattern::Pattern>::into_searcher(v40, a4, a2, a3);
  v39[0] = 0LL;
  v39[1] = a3;
  v41 = 1;
  v38 = 1LL;
  v8 = core::str::iter::SplitInternal<P>::next(v39);
  v10 = v9;
  v11 = 1LL;
  if ( v8 )
    v11 = v8;
  else
    v10 = 0LL;
  v27 = a1;
  if ( v38 )
  {
    if ( v38 == 1 )
    {
      v38 = 0LL;
      end = core::str::iter::SplitInternal<P>::get_end(v39);
    }
    else
    {
      --v38;
      end = core::str::iter::SplitInternal<P>::next(v39);
    }
    v14 = end;
    v7 = v13;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v14 )
    v7 = 0LL;
  uu_chown::parse_uid((__int64)&v28, v11, v10, a2, a3, SHIDWORD(v26));
  v15 = (__int64)v28;
  if ( v28 )
    goto LABEL_17;
  v16 = 1LL;
  if ( v14 )
    v16 = v14;
  v37 = (__m128d)(unsigned __int64)v29;
  uu_chown::parse_gid((__int64)&v28, v16, v7, a2, a3);
  v15 = (__int64)v28;
  if ( v28 )
  {
LABEL_17:
    v17 = (__int64 (__fastcall **)())v29;
  }
  else
  {
    v36 = (__m128d)(unsigned __int64)v29;
    v28 = (char **)v11;
    v29 = v10 + v11;
    v20 = core::str::validations::next_code_point(&v28);
    if ( (v20 & (v21 != 1114112)) != 1
      || v21 - 48 >= 0xA && (v21 < 0x80 || !(unsigned __int8)core::unicode::unicode_data::n::lookup(v21))
      || v7
      || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, v11, v10) )
    {
      v18 = v27;
      *(__m128d *)(v27 + 4) = _mm_unpacklo_pd(v37, v36);
      result = 0LL;
      goto LABEL_19;
    }
    v34[0] = 0LL;
    v34[1] = a2;
    v34[2] = a3;
    v35 = 1;
    v33[0] = v34;
    v33[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v28 = &off_F5FB0;
    v29 = 1LL;
    v32 = 0LL;
    v30 = v33;
    v31 = 1LL;
    core::option::Option<T>::map_or_else(v42, &v28);
    v43 = 1;
    v15 = alloc::boxed::Box<T>::new(v42, &v28, v22, v23, v24, v25, v26, v27, v28, v29);
    v17 = &off_F5F38;
  }
  v18 = v27;
  *(_QWORD *)(v27 + 8) = v15;
  *(_QWORD *)(v18 + 16) = v17;
  result = 1LL;
LABEL_19:
  *(_DWORD *)v18 = result;
  return result;
}