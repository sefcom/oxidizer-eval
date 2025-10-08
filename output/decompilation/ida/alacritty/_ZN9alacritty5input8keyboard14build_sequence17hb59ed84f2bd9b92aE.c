__int64 __fastcall alacritty::input::keyboard::build_sequence(
        _QWORD *a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int *v5; // r12
  char v6; // al
  char v7; // r13
  bool v8; // bl
  bool v9; // zf
  __int64 v10; // rdi
  unsigned int *v11; // rdx
  __int64 v12; // rdx
  unsigned int *v13; // r12
  __int64 v14; // rdx
  _QWORD *v15; // rax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned __int8 v19; // al
  __int64 v20; // rdx
  unsigned __int8 v21; // al
  __int64 v22; // rdx
  __int64 v23; // rsi
  _OWORD *v24; // rcx
  char v26; // [rsp+7h] [rbp-141h] BYREF
  unsigned int v27; // [rsp+8h] [rbp-140h] BYREF
  char v28; // [rsp+Ch] [rbp-13Ch]
  bool v29; // [rsp+Dh] [rbp-13Bh]
  bool v30; // [rsp+Eh] [rbp-13Ah]
  char v31; // [rsp+Fh] [rbp-139h]
  __int128 v32; // [rsp+10h] [rbp-138h] BYREF
  __int64 *v33; // [rsp+20h] [rbp-128h]
  __int64 v34; // [rsp+28h] [rbp-120h]
  __int64 v35; // [rsp+30h] [rbp-118h]
  unsigned int *v36; // [rsp+48h] [rbp-100h]
  __int128 v37; // [rsp+50h] [rbp-F8h] BYREF
  __int64 *v38; // [rsp+60h] [rbp-E8h]
  __int128 *v39; // [rsp+68h] [rbp-E0h] BYREF
  __int64 (__fastcall *v40)(); // [rsp+70h] [rbp-D8h]
  unsigned int v41; // [rsp+78h] [rbp-D0h]
  int v42; // [rsp+7Ch] [rbp-CCh] BYREF
  __int128 v43; // [rsp+80h] [rbp-C8h] BYREF
  __int128 v44; // [rsp+98h] [rbp-B0h] BYREF
  __int64 *v45; // [rsp+A8h] [rbp-A0h]
  unsigned int v46; // [rsp+B0h] [rbp-98h]
  __int128 v47; // [rsp+B8h] [rbp-90h] BYREF
  __int64 *v48; // [rsp+C8h] [rbp-80h]
  _QWORD *v49; // [rsp+D8h] [rbp-70h]
  __int64 v50; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v51; // [rsp+E8h] [rbp-60h]
  __int128 v52; // [rsp+F0h] [rbp-58h] BYREF
  __int128 v53; // [rsp+100h] [rbp-48h] BYREF
  __int64 *v54; // [rsp+110h] [rbp-38h]

  v5 = a2;
  v49 = a1;
  v6 = <alacritty::input::keyboard::SequenceModifiers as core::convert::From<winit::keyboard::ModifiersState>>::from(a3);
  v26 = v6;
  if ( (a4 & 0x80000) != 0 )
  {
    v7 = 1;
    if ( !*((_BYTE *)a2 + 121) )
      v7 = *((_BYTE *)a2 + 120);
  }
  else
  {
    v7 = 0;
  }
  v8 = (a4 & 0x2C0000) != 0;
  v27 = a4;
  v29 = v8;
  v30 = (a4 & 0x200000) != 0;
  v31 = v7;
  v28 = v6;
  v9 = *((_BYTE *)a2 + 64) == 26;
  v36 = a2;
  if ( v9 )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = smol_str::Repr::as_str(a2 + 16);
    a2 = v11;
    v8 = v29;
  }
  v50 = core::option::Option<T>::filter(v10, a2, a4, v5[30]);
  v51 = v12;
  alacritty::input::keyboard::SequenceBuilder::try_build_numpad(&v32, v8, v5);
  core::option::Option<T>::or_else(&v47, &v32, v29, *v5, *((unsigned __int16 *)v5 + 1));
  *(_QWORD *)&v44 = &v27;
  *((_QWORD *)&v44 + 1) = v5;
  v45 = &v50;
  core::option::Option<T>::or_else(&v32, &v47, &v44);
  *(_QWORD *)&v44 = &v27;
  *((_QWORD *)&v44 + 1) = v36;
  v45 = (__int64 *)&v26;
  v13 = v36;
  core::option::Option<T>::or_else(&v47, &v32, &v44);
  *(_QWORD *)&v32 = &v27;
  *((_QWORD *)&v32 + 1) = v13;
  v33 = &v50;
  core::option::Option<T>::or_else(&v44, &v47, &v32);
  if ( (_QWORD)v44 == 0x8000000000000001LL )
  {
    v15 = v49;
    *v49 = 0LL;
    v15[1] = 1LL;
    v15[2] = 0LL;
    core::ptr::drop_in_place<core::option::Option<alacritty::input::keyboard::SequenceBase>>(&v44);
  }
  else
  {
    v54 = v45;
    v53 = v44;
    v16 = v46;
    *(_QWORD *)&v37 = &v53;
    *((_QWORD *)&v37 + 1) = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
    *(_QWORD *)&v32 = &off_882C60;
    *((_QWORD *)&v32 + 1) = 1LL;
    v35 = 0LL;
    v33 = (__int64 *)&v37;
    v34 = 1LL;
    core::option::Option<T>::map_or_else(&v47, 0LL, v14, &v32);
    v37 = v47;
    v38 = v48;
    if ( v7 || v26 || v50 )
    {
      LOBYTE(v43) = v26 + 1;
      v39 = &v43;
      v40 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
      *(_QWORD *)&v32 = &off_882C70;
      *((_QWORD *)&v32 + 1) = 1LL;
      v35 = 0LL;
      v33 = (__int64 *)&v39;
      v34 = 1LL;
      core::option::Option<T>::map_or_else(&v47, 0LL, v17, &v32);
      v32 = v47;
      v33 = v48;
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v37,
        *((_QWORD *)&v47 + 1),
        (char *)v48 + *((_QWORD *)&v47 + 1));
      core::ptr::drop_in_place<alloc::string::String>(&v32);
      if ( v7 )
      {
        alloc::string::String::push(&v37, 58LL);
        v18 = 50LL;
        if ( !*((_BYTE *)v13 + 121) )
          v18 = 2 * (unsigned int)*((unsigned __int8 *)v13 + 120) + 49;
        alloc::string::String::push(&v37, v18);
      }
    }
    if ( v50 )
    {
      *(_QWORD *)&v52 = v50;
      *((_QWORD *)&v52 + 1) = v50 + v51;
      v19 = core::str::validations::next_code_point(&v52);
      if ( (((_DWORD)v20 != (_DWORD)&unk_110000) & v19) != 0 )
      {
        LODWORD(v43) = v20;
        v39 = &v43;
        v40 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
        *(_QWORD *)&v32 = &off_882C70;
        *((_QWORD *)&v32 + 1) = 1LL;
        v35 = 0LL;
        v33 = (__int64 *)&v39;
        v34 = 1LL;
        core::option::Option<T>::map_or_else(&v47, 0LL, v20, &v32);
        v32 = v47;
        v33 = v48;
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v37,
          *((_QWORD *)&v47 + 1),
          (char *)v48 + *((_QWORD *)&v47 + 1));
        core::ptr::drop_in_place<alloc::string::String>(&v32);
      }
      v41 = v16;
      v43 = v52;
      v21 = core::str::validations::next_code_point(&v43);
      if ( (v21 & ((_DWORD)v22 != (_DWORD)&unk_110000)) == 1 )
      {
        do
        {
          v42 = v22;
          v39 = (__int128 *)&v42;
          v40 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
          *(_QWORD *)&v32 = &off_882C80;
          *((_QWORD *)&v32 + 1) = 1LL;
          v35 = 0LL;
          v33 = (__int64 *)&v39;
          v34 = 1LL;
          core::option::Option<T>::map_or_else(&v47, 0LL, v22, &v32);
          v32 = v47;
          v33 = v48;
          <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
            &v37,
            *((_QWORD *)&v47 + 1),
            (char *)v48 + *((_QWORD *)&v47 + 1));
          core::ptr::drop_in_place<alloc::string::String>(&v32);
        }
        while ( (core::str::validations::next_code_point(&v43) & 1) != 0 && (_DWORD)v22 != (_DWORD)&unk_110000 );
      }
      v13 = v36;
      v16 = v41;
    }
    v23 = 117LL;
    if ( v16 != (_DWORD)&unk_110000 )
      v23 = v16;
    alloc::string::String::push(&v37, v23);
    v24 = v49;
    v49[2] = v38;
    *v24 = v37;
    core::ptr::drop_in_place<crossfont::Style>(&v53);
  }
  return core::ptr::drop_in_place<winit::event::KeyEvent>(v13);
}