char __fastcall uu_join::State::next_line(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbp
  __int128 v5; // rax
  unsigned __int64 v6; // rcx
  __int128 v7; // xmm0
  __int64 current_key; // rax
  size_t v9; // rdx
  __int64 *v10; // r13
  signed __int64 v11; // r12
  int v12; // eax
  __int128 v13; // xmm0
  __int64 v14; // rdx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  char v18; // [rsp+Fh] [rbp-159h]
  __int128 v19; // [rsp+10h] [rbp-158h] BYREF
  __int128 v20; // [rsp+20h] [rbp-148h]
  __int128 v21; // [rsp+30h] [rbp-138h]
  __int128 v22; // [rsp+40h] [rbp-128h] BYREF
  __int64 v23; // [rsp+50h] [rbp-118h]
  size_t n; // [rsp+58h] [rbp-110h]
  __int128 v25; // [rsp+60h] [rbp-108h] BYREF
  __int128 v26; // [rsp+70h] [rbp-F8h]
  __int128 v27; // [rsp+80h] [rbp-E8h]
  __int64 *v28; // [rsp+90h] [rbp-D8h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+98h] [rbp-D0h]
  __int128 *v30; // [rsp+A0h] [rbp-C8h]
  __int64 (__fastcall *v31)(); // [rsp+A8h] [rbp-C0h]
  __int64 v32; // [rsp+B0h] [rbp-B8h]
  _QWORD v33[3]; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+D8h] [rbp-90h] BYREF
  __int128 v35; // [rsp+E0h] [rbp-88h]
  char v36; // [rsp+F0h] [rbp-78h]
  __int128 v37; // [rsp+F8h] [rbp-70h] BYREF
  __int64 v38; // [rsp+108h] [rbp-60h]
  __int128 v39; // [rsp+110h] [rbp-58h]
  __int128 v40; // [rsp+120h] [rbp-48h]

  v4 = 0x8000000000000000LL;
  uu_join::State::read_line(&v19, a2, a3);
  *(_QWORD *)&v5 = *((_QWORD *)&v19 + 1);
  if ( (_QWORD)v19 != 0x8000000000000001LL )
  {
    v40 = v21;
    v39 = v20;
    if ( (_QWORD)v19 == 0x8000000000000000LL )
      goto LABEL_4;
    v25 = v19;
    v27 = v40;
    v26 = v39;
    v18 = *(_BYTE *)(a3 + 289);
    if ( v18 == 1 )
    {
      v6 = *((_QWORD *)&v25 + 1);
      *(_QWORD *)&v5 = v25;
      v7 = v26;
      *(_OWORD *)(a1 + 32) = v27;
      *(_OWORD *)(a1 + 16) = v7;
      *(_OWORD *)a1 = __PAIR128__(v6, v5);
      return v5;
    }
    current_key = uu_join::State::get_current_key(a2);
    n = v9;
    v10 = (__int64 *)current_key;
    *(_QWORD *)&v5 = uu_join::Line::get_field(&v25, *(_QWORD *)(a2 + 64));
    if ( v10 && (_QWORD)v5 )
    {
      if ( *(_BYTE *)(a3 + 288) )
      {
        v28 = v10;
        v29 = (__int64 (__fastcall *)())n;
        v19 = v5;
        LOBYTE(v5) = <uu_join::CaseInsensitiveSlice as core::cmp::Ord>::cmp(&v28, &v19);
      }
      else
      {
        v11 = n - *((_QWORD *)&v5 + 1);
        if ( n < *((_QWORD *)&v5 + 1) )
          *((_QWORD *)&v5 + 1) = n;
        v12 = memcmp(v10, (const void *)v5, *((size_t *)&v5 + 1));
        if ( v12 )
          v11 = v12;
        LOBYTE(v5) = v11 != 0;
        if ( v11 < 0 )
          goto LABEL_27;
      }
      if ( (_BYTE)v5 != 1 )
      {
LABEL_27:
        v15 = v25;
        v16 = v26;
        *(_OWORD *)(a1 + 32) = v27;
        *(_OWORD *)(a1 + 16) = v16;
        *(_OWORD *)a1 = v15;
        return v5;
      }
    }
    else if ( !v10 )
    {
      goto LABEL_27;
    }
    if ( v18 == 2 || *(_BYTE *)(a2 + 91) && !*(_BYTE *)(a2 + 90) )
    {
      v13 = *(_OWORD *)(a2 + 24);
      v34 = 0LL;
      v35 = v13;
      v36 = 0;
      alloc::string::String::from_utf8_lossy(v33, v27, *((_QWORD *)&v27 + 1));
      *(_QWORD *)&v19 = &v34;
      *((_QWORD *)&v19 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v20 = a2 + 80;
      *((_QWORD *)&v20 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)&v21 = v33;
      *((_QWORD *)&v21 + 1) = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
      v28 = (__int64 *)&unk_FB0B8;
      v29 = (__int64 (__fastcall *)())(&dword_0 + 3);
      v32 = 0LL;
      v30 = &v19;
      v31 = (__int64 (__fastcall *)())(&dword_0 + 3);
      alloc::fmt::format::format_inner(&v37, &v28);
      if ( v33[0] != 0x8000000000000000LL )
      {
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v33);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v33);
      }
      v22 = v37;
      v23 = v38;
      if ( v18 == 2 )
      {
        *(_QWORD *)(a1 + 24) = v23;
        *(_OWORD *)(a1 + 8) = v22;
        *(_QWORD *)a1 = 0x8000000000000001LL;
        LOBYTE(v5) = core::ptr::drop_in_place<uu_join::Line>(&v25);
        return v5;
      }
      v34 = uucore::execution_phrase();
      *(_QWORD *)&v35 = v14;
      v28 = &v34;
      v29 = <&T as core::fmt::Display>::fmt;
      v30 = &v22;
      v31 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v19 = &unk_FB0E8;
      *((_QWORD *)&v19 + 1) = 3LL;
      *(_QWORD *)&v21 = 0LL;
      *(_QWORD *)&v20 = &v28;
      *((_QWORD *)&v20 + 1) = 2LL;
      std::io::stdio::_eprint(&v19);
      *(_BYTE *)(a2 + 90) = 1;
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v22);
      LOBYTE(v5) = <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v22);
    }
    goto LABEL_27;
  }
  *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
  *(_QWORD *)(a1 + 16) = v5;
  v4 = 0x8000000000000001LL;
LABEL_4:
  *(_QWORD *)a1 = v4;
  return v5;
}
