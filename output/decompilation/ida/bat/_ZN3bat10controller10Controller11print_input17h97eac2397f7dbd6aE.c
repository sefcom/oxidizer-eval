__int64 __fastcall bat::controller::Controller::print_input(
        _OWORD *a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        char a6)
{
  __int128 v10; // rdi
  __int64 result; // rax
  __int64 v12; // r12
  __int64 v13; // r12
  __int64 (__fastcall **v14)(); // r13
  __int128 v15; // [rsp+0h] [rbp-6C8h]
  __int128 v16; // [rsp+0h] [rbp-6C8h]
  __int128 v17; // [rsp+10h] [rbp-6B8h]
  __int128 v18; // [rsp+10h] [rbp-6B8h]
  __int128 v19; // [rsp+20h] [rbp-6A8h]
  __int128 v20; // [rsp+20h] [rbp-6A8h]
  __int128 v21; // [rsp+30h] [rbp-698h]
  __int128 v22; // [rsp+30h] [rbp-698h]
  _OWORD v23[3]; // [rsp+50h] [rbp-678h] BYREF
  __int64 v24; // [rsp+88h] [rbp-640h] BYREF
  __int128 v25; // [rsp+90h] [rbp-638h]
  __int128 v26; // [rsp+A0h] [rbp-628h]
  __int128 v27; // [rsp+B0h] [rbp-618h]
  __int128 v28; // [rsp+C0h] [rbp-608h]
  __int128 v29; // [rsp+D0h] [rbp-5F8h]
  __int128 v30; // [rsp+E0h] [rbp-5E8h]
  __int128 v31; // [rsp+F0h] [rbp-5D8h]
  __int128 v32; // [rsp+100h] [rbp-5C8h]
  __int128 v33; // [rsp+110h] [rbp-5B8h]
  __int128 v34; // [rsp+120h] [rbp-5A8h]
  __int128 v35; // [rsp+130h] [rbp-598h]
  __int128 v36; // [rsp+140h] [rbp-588h]
  __int64 v37; // [rsp+150h] [rbp-578h]
  _BYTE v38[56]; // [rsp+158h] [rbp-570h] BYREF
  __int128 v39; // [rsp+190h] [rbp-538h]
  __int128 v40; // [rsp+1A0h] [rbp-528h]
  _BYTE src[584]; // [rsp+1B0h] [rbp-518h] BYREF
  __int64 v42; // [rsp+3F8h] [rbp-2D0h] BYREF
  __int128 v43; // [rsp+400h] [rbp-2C8h]
  __int128 v44; // [rsp+410h] [rbp-2B8h]
  __int128 v45; // [rsp+420h] [rbp-2A8h]
  __int128 v46; // [rsp+430h] [rbp-298h]
  __int128 v47; // [rsp+440h] [rbp-288h]
  _BYTE dest[584]; // [rsp+450h] [rbp-278h] BYREF

  *((_QWORD *)&v10 + 1) = a3;
  bat::input::Input::open(v38);
  result = *(_QWORD *)v38;
  v15 = *(_OWORD *)&v38[8];
  v17 = *(_OWORD *)&v38[24];
  v19 = *(_OWORD *)&v38[40];
  v21 = v39;
  if ( *(_QWORD *)v38 == 2LL )
  {
    a1[4] = v40;
    a1[3] = v21;
    a1[2] = v19;
    a1[1] = v17;
    *a1 = v15;
    return result;
  }
  v37 = *(_QWORD *)&src[112];
  v36 = *(_OWORD *)&src[96];
  v35 = *(_OWORD *)&src[80];
  v34 = *(_OWORD *)&src[64];
  v33 = *(_OWORD *)&src[48];
  v32 = *(_OWORD *)&src[32];
  v31 = *(_OWORD *)&src[16];
  v30 = *(_OWORD *)src;
  v25 = *(_OWORD *)&v38[8];
  v26 = *(_OWORD *)&v38[24];
  v27 = *(_OWORD *)&v38[40];
  v28 = v39;
  v29 = v40;
  v24 = *(_QWORD *)v38;
  v12 = *a2;
  if ( !__OFSUB__(0LL, *(_QWORD *)(*a2 + 144LL))
    && (*(_BYTE *)(v12 + 291) || !(unsigned __int8)bat::style::StyleComponents::changes(
                                                     v12 + 192,
                                                     *((_QWORD *)&v10 + 1))) )
  {
    goto LABEL_14;
  }
  if ( (__int64)v36 > (__int64)0x8000000000000001LL )
  {
    *((_QWORD *)&v10 + 1) = *((_QWORD *)&v36 + 1);
    bat::diff::get_git_diff(v38, *((_QWORD *)&v36 + 1), v37);
    if ( *(_QWORD *)(v12 + 144) == 0x8000000000000000LL )
    {
      *(_QWORD *)&v10 = *(_QWORD *)v38;
      if ( *(_QWORD *)v38 )
      {
        if ( !*(_QWORD *)&v38[24] )
        {
          *(_BYTE *)a1 = 13;
          *((_QWORD *)&v10 + 1) = *(_QWORD *)&v38[8];
LABEL_22:
          core::ptr::drop_in_place<core::option::Option<std::collections::hash::map::HashMap<u32,bat::diff::LineChange>>>(
            v10,
            *((_QWORD *)&v10 + 1));
          return core::ptr::drop_in_place<bat::input::OpenedInput>(&v24, *((_QWORD *)&v10 + 1));
        }
      }
    }
    v23[2] = *(_OWORD *)&v38[32];
    v23[1] = *(_OWORD *)&v38[16];
    v23[0] = *(_OWORD *)v38;
    if ( *(_BYTE *)(v12 + 291) )
      goto LABEL_15;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(v12 + 144) != 0x8000000000000000LL )
  {
LABEL_14:
    *(_QWORD *)&v23[0] = 0LL;
    if ( *(_BYTE *)(v12 + 291) )
    {
LABEL_15:
      v13 = alloc::boxed::Box<T>::new(v12, *((_QWORD *)&v10 + 1));
      v14 = (__int64 (__fastcall **)())&unk_6CE358;
      goto LABEL_20;
    }
LABEL_17:
    bat::printer::InteractivePrinter::new(v38, v12, a2[1], &v24, v23);
    v16 = *(_OWORD *)&v38[8];
    v18 = *(_OWORD *)&v38[24];
    v20 = *(_OWORD *)&v38[40];
    v22 = v39;
    if ( *(_QWORD *)v38 == 0x8000000000000000LL )
    {
      a1[4] = v40;
      a1[3] = v22;
      a1[2] = v20;
      a1[1] = v18;
      *a1 = v16;
LABEL_21:
      v10 = v23[0];
      goto LABEL_22;
    }
    memcpy(dest, src, sizeof(dest));
    v42 = *(_QWORD *)v38;
    v43 = *(_OWORD *)&v38[8];
    v44 = *(_OWORD *)&v38[24];
    v45 = *(_OWORD *)&v38[40];
    v46 = v39;
    v47 = v40;
    v13 = alloc::boxed::Box<T>::new(&v42);
    v14 = &off_6CE320;
LABEL_20:
    bat::controller::Controller::print_file(
      (_DWORD)a1,
      (_DWORD)a2,
      v13,
      (_DWORD)v14,
      a4,
      (unsigned int)&v24,
      a6 ^ 1,
      (__int64)v23);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v13, v14);
    goto LABEL_21;
  }
  *(_BYTE *)a1 = 13;
  return core::ptr::drop_in_place<bat::input::OpenedInput>(&v24, *((_QWORD *)&v10 + 1));
}