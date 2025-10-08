char __fastcall uu_join::State::next_line(__int64 a1, __int64 a2, char *a3)
{
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  size_t v8; // rdx
  size_t v9; // rbp
  const void *field; // rax
  size_t v11; // rdx
  __int128 v12; // xmm0
  __int64 v13; // rdx
  char v15; // [rsp+Fh] [rbp-169h]
  __int128 v16; // [rsp+10h] [rbp-168h] BYREF
  __int64 v17; // [rsp+20h] [rbp-158h]
  __int128 v18; // [rsp+30h] [rbp-148h] BYREF
  __int128 v19; // [rsp+40h] [rbp-138h]
  __int128 v20; // [rsp+50h] [rbp-128h]
  __int128 v21; // [rsp+60h] [rbp-118h] BYREF
  __int128 v22; // [rsp+70h] [rbp-108h]
  __int128 v23; // [rsp+80h] [rbp-F8h]
  const void *current_key; // [rsp+90h] [rbp-E8h]
  __int128 v25; // [rsp+98h] [rbp-E0h] BYREF
  __int128 v26; // [rsp+A8h] [rbp-D0h]
  __int128 v27; // [rsp+B8h] [rbp-C0h]
  __int64 *v28; // [rsp+C8h] [rbp-B0h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+D0h] [rbp-A8h]
  __int128 *v30; // [rsp+D8h] [rbp-A0h]
  __int64 (__fastcall *v31)(); // [rsp+E0h] [rbp-98h]
  __int64 v32; // [rsp+E8h] [rbp-90h]
  _QWORD v33[3]; // [rsp+F8h] [rbp-80h] BYREF
  __int64 v34; // [rsp+110h] [rbp-68h] BYREF
  __int128 v35; // [rsp+118h] [rbp-60h]
  char v36; // [rsp+128h] [rbp-50h]
  __int128 v37; // [rsp+130h] [rbp-48h] BYREF
  __int64 v38; // [rsp+140h] [rbp-38h]

  uu_join::State::read_line(&v18, a2, a3 + 2);
  v4 = *((_QWORD *)&v18 + 1);
  if ( (_QWORD)v18 == 0x8000000000000001LL )
  {
    *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
    *(_QWORD *)(a1 + 16) = v4;
    *(_QWORD *)a1 = 0x8000000000000001LL;
  }
  else
  {
    v27 = v20;
    v26 = v19;
    v25 = v18;
    if ( (_QWORD)v18 != 0x8000000000000000LL )
    {
      v23 = v27;
      v22 = v26;
      v21 = v25;
      LOBYTE(v4) = a3[1];
      v15 = v4;
      if ( (_BYTE)v4 == 1 )
      {
        v5 = v25;
        v6 = v26;
        v7 = v27;
      }
      else
      {
        current_key = (const void *)uu_join::State::get_current_key(a2);
        v9 = v8;
        field = (const void *)uu_join::Line::get_field(&v21, *(_QWORD *)(a2 + 64));
        LOBYTE(v4) = uu_join::Input<Sep>::compare(*a3, current_key, v9, field, v11);
        if ( (_BYTE)v4 == 1 && (v15 == 2 || *(_BYTE *)(a2 + 91) && !*(_BYTE *)(a2 + 90)) )
        {
          v12 = *(_OWORD *)(a2 + 24);
          v34 = 0LL;
          v35 = v12;
          v36 = 0;
          alloc::string::String::from_utf8_lossy(v33, v23, *((_QWORD *)&v23 + 1));
          *(_QWORD *)&v18 = &v34;
          *((_QWORD *)&v18 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)&v19 = a2 + 80;
          *((_QWORD *)&v19 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          *(_QWORD *)&v20 = v33;
          *((_QWORD *)&v20 + 1) = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
          v28 = (__int64 *)&unk_FD400;
          v29 = (__int64 (__fastcall *)())(&dword_0 + 3);
          v32 = 0LL;
          v30 = &v18;
          v31 = (__int64 (__fastcall *)())(&dword_0 + 3);
          core::option::Option<T>::map_or_else(&v37, &v28);
          core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v33[0], v33[1]);
          v16 = v37;
          v17 = v38;
          if ( v15 == 2 )
          {
            *(_QWORD *)(a1 + 24) = v17;
            *(_OWORD *)(a1 + 8) = v16;
            *(_QWORD *)a1 = 0x8000000000000001LL;
            LOBYTE(v4) = core::ptr::drop_in_place<uu_join::Line>(&v21);
            return v4;
          }
          v34 = uucore::execution_phrase();
          *(_QWORD *)&v35 = v13;
          v28 = &v34;
          v29 = <&T as core::fmt::Display>::fmt;
          v30 = &v16;
          v31 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v18 = &unk_FD430;
          *((_QWORD *)&v18 + 1) = 3LL;
          *(_QWORD *)&v20 = 0LL;
          *(_QWORD *)&v19 = &v28;
          *((_QWORD *)&v19 + 1) = 2LL;
          std::io::stdio::_eprint(&v18);
          *(_BYTE *)(a2 + 90) = 1;
          LOBYTE(v4) = core::ptr::drop_in_place<alloc::string::String>(v16, *((_QWORD *)&v16 + 1));
        }
        v5 = v21;
        v6 = v22;
        v7 = v23;
      }
      *(_OWORD *)(a1 + 32) = v7;
      *(_OWORD *)(a1 + 16) = v6;
      *(_OWORD *)a1 = v5;
      return v4;
    }
    LOBYTE(v4) = core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v25);
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  return v4;
}