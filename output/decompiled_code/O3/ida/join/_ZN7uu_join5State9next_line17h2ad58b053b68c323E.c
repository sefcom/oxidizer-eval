__int64 __fastcall uu_join::State::next_line(__int64 a1, __int64 a2, char *a3)
{
  unsigned __int64 v4; // r13
  __int64 result; // rax
  unsigned __int64 v6; // rcx
  __int128 v7; // xmm0
  size_t v8; // rdx
  size_t v9; // rbp
  const void *field; // rax
  size_t v11; // rdx
  __int128 v12; // xmm0
  __int64 v13; // rdx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  char v16; // [rsp+Fh] [rbp-159h]
  __int128 v17; // [rsp+10h] [rbp-158h] BYREF
  __int128 v18; // [rsp+20h] [rbp-148h]
  __int128 v19; // [rsp+30h] [rbp-138h]
  __int128 v20; // [rsp+40h] [rbp-128h] BYREF
  __int128 v21; // [rsp+50h] [rbp-118h]
  __int128 v22; // [rsp+60h] [rbp-108h]
  __int128 v23; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v24; // [rsp+80h] [rbp-E8h]
  const void *current_key; // [rsp+90h] [rbp-D8h]
  __int64 *v26; // [rsp+98h] [rbp-D0h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+A0h] [rbp-C8h]
  __int128 *v28; // [rsp+A8h] [rbp-C0h]
  __int64 (__fastcall *v29)(); // [rsp+B0h] [rbp-B8h]
  __int64 v30; // [rsp+B8h] [rbp-B0h]
  __int64 v31; // [rsp+C8h] [rbp-A0h] BYREF
  __int128 v32; // [rsp+D0h] [rbp-98h]
  char v33; // [rsp+E0h] [rbp-88h]
  __int128 v34; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v35; // [rsp+F8h] [rbp-70h]
  __int128 v36; // [rsp+100h] [rbp-68h]
  __int128 v37; // [rsp+110h] [rbp-58h]
  _BYTE v38[72]; // [rsp+120h] [rbp-48h] BYREF

  v4 = 0x8000000000000000LL;
  uu_join::State::read_line(&v17, a2, a3 + 2);
  result = *((_QWORD *)&v17 + 1);
  if ( (_QWORD)v17 == 0x8000000000000001LL )
  {
    *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
    *(_QWORD *)(a1 + 16) = result;
    v4 = 0x8000000000000001LL;
LABEL_4:
    *(_QWORD *)a1 = v4;
    return result;
  }
  v37 = v19;
  v36 = v18;
  if ( (_QWORD)v17 == 0x8000000000000000LL )
    goto LABEL_4;
  v20 = v17;
  v22 = v37;
  v21 = v36;
  v16 = a3[1];
  if ( v16 == 1 )
  {
    v6 = *((_QWORD *)&v20 + 1);
    result = v20;
    v7 = v21;
    *(_OWORD *)(a1 + 32) = v22;
    *(_OWORD *)(a1 + 16) = v7;
    *(_OWORD *)a1 = __PAIR128__(v6, result);
    return result;
  }
  current_key = (const void *)uu_join::State::get_current_key(a2);
  v9 = v8;
  field = (const void *)uu_join::Line::get_field(&v20, *(_QWORD *)(a2 + 64));
  result = uu_join::Input<Sep>::compare(*a3, current_key, v9, field, v11);
  if ( (_BYTE)result == 1 && (v16 == 2 || *(_BYTE *)(a2 + 91) && !*(_BYTE *)(a2 + 90)) )
  {
    v12 = *(_OWORD *)(a2 + 24);
    v31 = 0LL;
    v32 = v12;
    v33 = 0;
    alloc::string::String::from_utf8_lossy(v38, v22, *((_QWORD *)&v22 + 1));
    *(_QWORD *)&v17 = &v31;
    *((_QWORD *)&v17 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&v18 = a2 + 80;
    *((_QWORD *)&v18 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *(_QWORD *)&v19 = v38;
    *((_QWORD *)&v19 + 1) = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
    v26 = (__int64 *)&unk_1332C8;
    v27 = (__int64 (__fastcall *)())(&dword_0 + 3);
    v30 = 0LL;
    v28 = &v17;
    v29 = (__int64 (__fastcall *)())(&dword_0 + 3);
    core::option::Option<T>::map_or_else(&v34, &v26);
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v38);
    v23 = v34;
    v24 = v35;
    if ( v16 == 2 )
    {
      *(_QWORD *)(a1 + 24) = v24;
      *(_OWORD *)(a1 + 8) = v23;
      *(_QWORD *)a1 = 0x8000000000000001LL;
      return core::ptr::drop_in_place<uu_join::Line>(&v20);
    }
    v31 = uucore::execution_phrase();
    *(_QWORD *)&v32 = v13;
    v26 = &v31;
    v27 = <&T as core::fmt::Display>::fmt;
    v28 = &v23;
    v29 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v17 = &unk_1332F8;
    *((_QWORD *)&v17 + 1) = 3LL;
    *(_QWORD *)&v19 = 0LL;
    *(_QWORD *)&v18 = &v26;
    *((_QWORD *)&v18 + 1) = 2LL;
    std::io::stdio::_eprint(&v17);
    *(_BYTE *)(a2 + 90) = 1;
    result = core::ptr::drop_in_place<alloc::string::String>(&v23);
  }
  v14 = v20;
  v15 = v21;
  *(_OWORD *)(a1 + 32) = v22;
  *(_OWORD *)(a1 + 16) = v15;
  *(_OWORD *)a1 = v14;
  return result;
}
