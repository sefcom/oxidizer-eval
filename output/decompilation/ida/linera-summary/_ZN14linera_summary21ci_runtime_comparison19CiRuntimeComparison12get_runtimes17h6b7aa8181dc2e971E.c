__int64 __fastcall linera_summary::ci_runtime_comparison::CiRuntimeComparison::get_runtimes(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD *v2; // rcx
  __int64 v3; // rbp
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _BYTE *v8; // rdi
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rsi
  const char *v12; // rdi
  char v13; // [rsp+7h] [rbp-551h] BYREF
  _QWORD *v14; // [rsp+8h] [rbp-550h]
  __int128 v15; // [rsp+10h] [rbp-548h] BYREF
  __int64 v16; // [rsp+20h] [rbp-538h]
  __int64 v17; // [rsp+28h] [rbp-530h] BYREF
  int v18; // [rsp+30h] [rbp-528h]
  int v19; // [rsp+34h] [rbp-524h] BYREF
  __int64 v20; // [rsp+38h] [rbp-520h]
  _BYTE v21[32]; // [rsp+40h] [rbp-518h] BYREF
  _QWORD dest[73]; // [rsp+60h] [rbp-4F8h] BYREF
  _BYTE v23[56]; // [rsp+2A8h] [rbp-2B0h] BYREF
  _QWORD src[79]; // [rsp+2E0h] [rbp-278h] BYREF

  v14 = a1;
  *(_QWORD *)&v15 = 0LL;
  v16 = 0LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v21);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, v21);
  if ( __OFSUB__(0LL, src[0]) )
  {
LABEL_2:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<octocrab::models::workflows::Job>>(v21);
    result = v16;
    v2 = v14;
    v14[3] = v16;
    *(_OWORD *)(v2 + 1) = v15;
    *v2 = 0LL;
    return result;
  }
  while ( 1 )
  {
    memcpy(dest, src, sizeof(dest));
    if ( LOBYTE(dest[72]) != 3 )
    {
      v6 = <(A,B) as anyhow::ensure::BothDebug>::__dispatch_ensure(&dest[72]);
LABEL_13:
      v7 = v14;
      v14[1] = v6;
      *v7 = 1LL;
      v8 = dest;
      goto LABEL_15;
    }
    if ( BYTE1(dest[72]) == 7 )
    {
      v11 = 44LL;
      v12 = aConditionFaile_1;
LABEL_18:
      v6 = anyhow::error::<impl anyhow::Error>::msg(v12, v11);
      goto LABEL_13;
    }
    v13 = BYTE1(dest[72]);
    if ( BYTE1(dest[72]) != 5 )
    {
      v6 = <(A,B) as anyhow::ensure::BothDebug>::__dispatch_ensure(&v13);
      goto LABEL_13;
    }
    if ( !HIDWORD(dest[70]) )
    {
      v11 = 46LL;
      v12 = aConditionFaile;
      goto LABEL_18;
    }
    alloc::collections::btree::map::BTreeMap<K,V,A>::entry(v23, &v15, src);
    v3 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(v23);
    <alloc::string::String as core::clone::Clone>::clone(v23, &dest[45]);
    if ( !HIDWORD(dest[70]) )
      core::option::unwrap_failed(&off_8F3390);
    v19 = HIDWORD(dest[70]);
    v20 = dest[71];
    v18 = HIDWORD(dest[69]);
    v17 = *(_QWORD *)((char *)&dest[68] + 4);
    v4 = chrono::datetime::DateTime<Tz>::signed_duration_since(&v19, &v17);
    if ( v4 + ((v4 < 0) & (unsigned __int8)(v5 > 0)) < 0 )
      break;
    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v3, v23);
    core::ptr::drop_in_place<alloc::string::String>(&dest[3]);
    core::ptr::drop_in_place<url::Url>(&dest[6]);
    core::ptr::drop_in_place<alloc::string::String>(&dest[17]);
    core::ptr::drop_in_place<alloc::string::String>(&dest[20]);
    core::ptr::drop_in_place<url::Url>(&dest[23]);
    core::ptr::drop_in_place<url::Url>(&dest[34]);
    core::ptr::drop_in_place<alloc::string::String>(&dest[45]);
    core::ptr::drop_in_place<alloc::vec::Vec<octocrab::models::workflows::Step>>(&dest[48]);
    core::ptr::drop_in_place<alloc::string::String>(&dest[51]);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&dest[54]);
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&dest[57]);
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&dest[60]);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, v21);
    if ( src[0] == 0x8000000000000000LL )
      goto LABEL_2;
  }
  v9 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from();
  v10 = v14;
  v14[1] = v9;
  *v10 = 1LL;
  v8 = v23;
LABEL_15:
  core::ptr::drop_in_place<alloc::string::String>(v8);
  core::ptr::drop_in_place<alloc::string::String>(&dest[3]);
  core::ptr::drop_in_place<url::Url>(&dest[6]);
  core::ptr::drop_in_place<alloc::string::String>(&dest[17]);
  core::ptr::drop_in_place<alloc::string::String>(&dest[20]);
  core::ptr::drop_in_place<url::Url>(&dest[23]);
  core::ptr::drop_in_place<url::Url>(&dest[34]);
  core::ptr::drop_in_place<alloc::string::String>(&dest[45]);
  core::ptr::drop_in_place<alloc::vec::Vec<octocrab::models::workflows::Step>>(&dest[48]);
  core::ptr::drop_in_place<alloc::string::String>(&dest[51]);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&dest[54]);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&dest[57]);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&dest[60]);
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<octocrab::models::workflows::Job>>(v21);
  return core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,alloc::collections::btree::map::BTreeMap<alloc::string::String,u64>>>(&v15);
}