__int64 __fastcall uu_ls::colors::StyleManager::apply_style(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 normal_style; // rax
  char v10; // cl
  __int64 v11; // rdx
  const char *v12; // rsi
  __int64 v13; // rax
  const char *v14; // rsi
  __int64 v15; // rdx
  char v16; // bl
  const char *v17; // r13
  __int64 v18; // rsi
  const char *v19; // r14
  __int64 v20; // rdx
  __int64 result; // rax
  _OWORD *v22; // rcx
  _BYTE v23[24]; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v24; // [rsp+20h] [rbp-88h] BYREF
  __int64 v25; // [rsp+30h] [rbp-78h]
  __int64 v26; // [rsp+38h] [rbp-70h]
  __int128 v27; // [rsp+40h] [rbp-68h]
  int v28; // [rsp+50h] [rbp-58h]
  char v29; // [rsp+63h] [rbp-45h] BYREF
  __int128 v30; // [rsp+64h] [rbp-44h]
  int v31; // [rsp+74h] [rbp-34h]

  v26 = a1;
  *(_QWORD *)&v24 = 0LL;
  *((_QWORD *)&v24 + 1) = 1LL;
  v25 = 0LL;
  if ( *((_BYTE *)a2 + 8) == 2 )
  {
    normal_style = uu_ls::colors::StyleManager::get_normal_style(*a2);
    if ( normal_style )
    {
      v10 = *(_BYTE *)normal_style;
      v28 = *(_DWORD *)(normal_style + 17);
      v27 = *(_OWORD *)(normal_style + 1);
      if ( v10 != 2 )
      {
        v29 = v10;
        v30 = v27;
        v31 = v28;
        uu_ls::colors::StyleManager::get_style_code(v23, a2, &v29);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v24,
          *(_QWORD *)&v23[8],
          *(_QWORD *)&v23[8] + *(_QWORD *)&v23[16]);
        core::ptr::drop_in_place<alloc::string::String>(v23);
      }
    }
  }
  if ( a3 )
  {
    if ( !(unsigned __int8)uu_ls::colors::StyleManager::is_current_style(a2, a3) )
    {
      if ( *((_BYTE *)a2 + 8) == 2 && *((_BYTE *)a2 + 29) )
      {
        v11 = 0LL;
        v12 = (_BYTE *)(&dword_0 + 1);
      }
      else
      {
        *((_BYTE *)a2 + 29) = 1;
        *((_BYTE *)a2 + 8) = 2;
        v12 = a0m;
        v11 = 4LL;
      }
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v24,
        v12,
        &v12[v11]);
      uu_ls::colors::StyleManager::get_style_code(v23, a2, a3);
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v24,
        *(_QWORD *)&v23[8],
        *(_QWORD *)&v23[8] + *(_QWORD *)&v23[16]);
      core::ptr::drop_in_place<alloc::string::String>(v23);
    }
    goto LABEL_17;
  }
  v13 = uu_ls::colors::StyleManager::get_normal_style(*a2);
  if ( !v13
    || (*(_OWORD *)v23 = *(_OWORD *)v13, *(_QWORD *)&v23[13] = *(_QWORD *)(v13 + 13), v23[0] == 2)
    || !(unsigned __int8)uu_ls::colors::StyleManager::is_current_style(a2, v23) )
  {
LABEL_17:
    v16 = 0;
    goto LABEL_18;
  }
  if ( *((_BYTE *)a2 + 8) == 2 )
  {
    v14 = (_BYTE *)(&dword_0 + 1);
    v15 = 0LL;
  }
  else
  {
    *((_BYTE *)a2 + 29) = 1;
    *((_BYTE *)a2 + 8) = 2;
    v14 = a0m;
    v15 = 4LL;
  }
  v16 = 1;
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v24,
    v14,
    &v14[v15]);
LABEL_18:
  v17 = aK;
  v18 = a4;
  v19 = (_BYTE *)(&dword_0 + 1);
  if ( !a5 )
    v17 = (_BYTE *)(&dword_0 + 1);
  *(_QWORD *)&v23[16] = v25;
  *(_OWORD *)v23 = v24;
  std::ffi::os_str::OsString::push(v23, v18);
  if ( ((*((_BYTE *)a2 + 8) == 2) & (unsigned __int8)~v16) != 0 )
  {
    v20 = 0LL;
  }
  else
  {
    *((_BYTE *)a2 + 29) = 1;
    *((_BYTE *)a2 + 8) = 2;
    v19 = a0m;
    v20 = 4LL;
  }
  std::ffi::os_str::OsString::push(v23, v19, v20);
  std::ffi::os_str::OsString::push(v23, v17, 3LL * a5);
  result = *(_QWORD *)&v23[16];
  v22 = (_OWORD *)v26;
  *(_QWORD *)(v26 + 16) = *(_QWORD *)&v23[16];
  *v22 = *(_OWORD *)v23;
  return result;
}