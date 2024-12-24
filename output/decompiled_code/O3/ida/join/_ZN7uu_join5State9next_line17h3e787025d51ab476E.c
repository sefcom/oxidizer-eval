unsigned __int64 __fastcall uu_join::State::next_line(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r13
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rcx
  __int128 v7; // xmm0
  size_t v8; // rdx
  size_t v9; // rbp
  const void *field; // rax
  size_t v11; // rdx
  __int64 v12; // r9
  __int128 v13; // xmm0
  __int64 v14; // rdx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  char v17; // [rsp+Fh] [rbp-159h]
  __int128 v18; // [rsp+10h] [rbp-158h] BYREF
  __int128 v19; // [rsp+20h] [rbp-148h]
  __int128 v20; // [rsp+30h] [rbp-138h]
  __int128 v21; // [rsp+40h] [rbp-128h] BYREF
  __int128 v22; // [rsp+50h] [rbp-118h]
  __int128 v23; // [rsp+60h] [rbp-108h]
  __int128 v24; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v25; // [rsp+80h] [rbp-E8h]
  const void *current_key; // [rsp+90h] [rbp-D8h]
  __int64 *v27; // [rsp+98h] [rbp-D0h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+A0h] [rbp-C8h]
  __int128 *v29; // [rsp+A8h] [rbp-C0h]
  __int64 (__fastcall *v30)(); // [rsp+B0h] [rbp-B8h]
  __int64 v31; // [rsp+B8h] [rbp-B0h]
  __int64 v32; // [rsp+C8h] [rbp-A0h] BYREF
  __int128 v33; // [rsp+D0h] [rbp-98h]
  char v34; // [rsp+E0h] [rbp-88h]
  __int128 v35; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v36; // [rsp+F8h] [rbp-70h]
  __int128 v37; // [rsp+100h] [rbp-68h]
  __int128 v38; // [rsp+110h] [rbp-58h]
  _BYTE v39[72]; // [rsp+120h] [rbp-48h] BYREF

  v4 = 0x8000000000000000LL;
  uu_join::State::read_line((__int64)&v18, a2, a3);
  result = *((_QWORD *)&v18 + 1);
  if ( (_QWORD)v18 == 0x8000000000000001LL )
  {
    *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
    *(_QWORD *)(a1 + 16) = result;
    v4 = 0x8000000000000001LL;
LABEL_4:
    *(_QWORD *)a1 = v4;
    return result;
  }
  v38 = v20;
  v37 = v19;
  if ( (_QWORD)v18 == 0x8000000000000000LL )
    goto LABEL_4;
  v21 = v18;
  v23 = v38;
  v22 = v37;
  v17 = *(_BYTE *)(a3 + 289);
  if ( v17 == 1 )
  {
    v6 = *((_QWORD *)&v21 + 1);
    result = v21;
    v7 = v22;
    *(_OWORD *)(a1 + 32) = v23;
    *(_OWORD *)(a1 + 16) = v7;
    *(_OWORD *)a1 = __PAIR128__(v6, result);
    return result;
  }
  current_key = (const void *)uu_join::State::get_current_key(a2);
  v9 = v8;
  field = (const void *)uu_join::Line::get_field(&v21, *(_QWORD *)(a2 + 64));
  result = uu_join::Input<Sep>::compare(*(_DWORD *)(a3 + 288), current_key, v9, field, v11, v12);
  if ( (_BYTE)result == 1 && (v17 == 2 || *(_BYTE *)(a2 + 91) && !*(_BYTE *)(a2 + 90)) )
  {
    v13 = *(_OWORD *)(a2 + 24);
    v32 = 0LL;
    v33 = v13;
    v34 = 0;
    alloc::string::String::from_utf8_lossy(v39, v23, *((_QWORD *)&v23 + 1));
    *(_QWORD *)&v18 = &v32;
    *((_QWORD *)&v18 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&v19 = a2 + 80;
    *((_QWORD *)&v19 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *(_QWORD *)&v20 = v39;
    *((_QWORD *)&v20 + 1) = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
    v27 = (__int64 *)&unk_1332C8;
    v28 = (__int64 (__fastcall *)())(&dword_0 + 3);
    v31 = 0LL;
    v29 = &v18;
    v30 = (__int64 (__fastcall *)())(&dword_0 + 3);
    core::option::Option<T>::map_or_else(&v35, &v27);
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v39);
    v24 = v35;
    v25 = v36;
    if ( v17 == 2 )
    {
      *(_QWORD *)(a1 + 24) = v25;
      *(_OWORD *)(a1 + 8) = v24;
      *(_QWORD *)a1 = 0x8000000000000001LL;
      return core::ptr::drop_in_place<uu_join::Line>(&v21);
    }
    v32 = uucore::execution_phrase();
    *(_QWORD *)&v33 = v14;
    v27 = &v32;
    v28 = <&T as core::fmt::Display>::fmt;
    v29 = &v24;
    v30 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v18 = &unk_1332F8;
    *((_QWORD *)&v18 + 1) = 3LL;
    *(_QWORD *)&v20 = 0LL;
    *(_QWORD *)&v19 = &v27;
    *((_QWORD *)&v19 + 1) = 2LL;
    std::io::stdio::_eprint(&v18);
    *(_BYTE *)(a2 + 90) = 1;
    result = core::ptr::drop_in_place<alloc::string::String>(&v24);
  }
  v15 = v21;
  v16 = v22;
  *(_OWORD *)(a1 + 32) = v23;
  *(_OWORD *)(a1 + 16) = v16;
  *(_OWORD *)a1 = v15;
  return result;
}
