_QWORD *__fastcall forc_debug::server::DapServer::build_tests(_QWORD *dest, __int64 a2)
{
  char v2; // al
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  char v9; // bp
  char v10; // r14
  __int64 v11; // r13
  __int128 v12; // kr00_16
  char v13; // r15
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  char member_index; // r14
  __int64 v18; // rdx
  unsigned int v19; // r15d
  char v20; // bp
  int v21; // ebp
  int v22; // eax
  __int64 v23; // rbp
  __int64 v24; // rdx
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  char v28; // r14
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  int v32; // eax
  __int64 v33; // r14
  __int64 v34; // r13
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v39; // [rsp+28h] [rbp-1AB0h]
  __int64 v40; // [rsp+30h] [rbp-1AA8h]
  void *v41; // [rsp+38h] [rbp-1AA0h]
  _OWORD v42[15]; // [rsp+40h] [rbp-1A98h] BYREF
  __int128 v43; // [rsp+130h] [rbp-19A8h] BYREF
  __int64 v44; // [rsp+140h] [rbp-1998h]
  __int128 v45; // [rsp+150h] [rbp-1988h] BYREF
  __int64 v46; // [rsp+160h] [rbp-1978h]
  __int64 v47; // [rsp+168h] [rbp-1970h]
  __m256i v48; // [rsp+170h] [rbp-1968h] BYREF
  __int128 v49; // [rsp+190h] [rbp-1948h]
  __int128 v50; // [rsp+1A0h] [rbp-1938h]
  __int128 v51; // [rsp+1B0h] [rbp-1928h]
  __int64 v52; // [rsp+1C0h] [rbp-1918h]
  __int128 v53; // [rsp+1C8h] [rbp-1910h] BYREF
  __int64 v54; // [rsp+1D8h] [rbp-1900h]
  _QWORD v55[2]; // [rsp+1E0h] [rbp-18F8h] BYREF
  __m256i v56; // [rsp+1F0h] [rbp-18E8h] BYREF
  __int128 v57; // [rsp+210h] [rbp-18C8h]
  __int128 v58; // [rsp+220h] [rbp-18B8h]
  __int128 v59; // [rsp+230h] [rbp-18A8h]
  __int64 v60; // [rsp+240h] [rbp-1898h]
  __int64 v61; // [rsp+250h] [rbp-1888h] BYREF
  __int64 v62; // [rsp+258h] [rbp-1880h]
  _OWORD desta[38]; // [rsp+280h] [rbp-1858h] BYREF
  _OWORD v64[7]; // [rsp+4E0h] [rbp-15F8h] BYREF
  __int128 v65; // [rsp+558h] [rbp-1580h] BYREF
  __int64 v66; // [rsp+568h] [rbp-1570h]
  __int128 v67; // [rsp+570h] [rbp-1568h] BYREF
  __int64 v68; // [rsp+580h] [rbp-1558h]
  _QWORD v69[3]; // [rsp+588h] [rbp-1550h] BYREF
  __int64 v70[29]; // [rsp+5A0h] [rbp-1538h] BYREF
  _OWORD v71[5]; // [rsp+688h] [rbp-1450h] BYREF
  __int64 v72; // [rsp+6D8h] [rbp-1400h]
  _OWORD v73[7]; // [rsp+6E0h] [rbp-13F8h] BYREF
  _OWORD src[99]; // [rsp+750h] [rbp-1388h] BYREF
  _OWORD v75[137]; // [rsp+D80h] [rbp-D58h] BYREF
  _BYTE v76[144]; // [rsp+1610h] [rbp-4C8h] BYREF
  _BYTE v77[864]; // [rsp+16A0h] [rbp-438h] BYREF
  _QWORD v78[27]; // [rsp+1A00h] [rbp-D8h] BYREF

  *((_QWORD *)&src[53] + 1) = 0LL;
  v41 = (void *)(a2 + 16);
  if ( *(_DWORD *)(a2 + 16) != 2 && *(_QWORD *)(a2 + 1768) != 0x8000000000000002LL )
  {
    <forc_pkg::pkg::BuiltPackage as core::clone::Clone>::clone(src);
    <forc_test::setup::TestSetup as core::clone::Clone>::clone(v77, a2 + 1768);
    memcpy(v75, src, 0x630uLL);
    memcpy(&v75[99], v77, 0x260uLL);
    memcpy(dest, v75, 0x890uLL);
    return dest;
  }
  <forc_pkg::manifest::ManifestFile as forc_pkg::manifest::GenericManifestFile>::from_dir(v73, a2 + 1600);
  if ( LODWORD(v73[0]) != 3 )
  {
    *(_OWORD *)((char *)&src[6] + 7) = v73[6];
    *(_OWORD *)((char *)&src[5] + 7) = v73[5];
    *(_OWORD *)((char *)&src[4] + 7) = v73[4];
    *(_OWORD *)((char *)&src[3] + 7) = v73[3];
    *(_OWORD *)((char *)&src[2] + 7) = v73[2];
    *(_OWORD *)((char *)&src[1] + 7) = v73[1];
    *(_OWORD *)((char *)src + 7) = v73[0];
LABEL_7:
    *(_OWORD *)&v77[103] = *(_OWORD *)((char *)&src[6] + 7);
    *(_OWORD *)&v77[87] = *(_OWORD *)((char *)&src[5] + 7);
    *(_OWORD *)&v77[71] = *(_OWORD *)((char *)&src[4] + 7);
    v64[0] = *(_OWORD *)((char *)src + 7);
    v64[1] = *(_OWORD *)((char *)&src[1] + 7);
    v64[2] = *(_OWORD *)((char *)&src[2] + 7);
    v64[3] = *(_OWORD *)((char *)&src[3] + 7);
    v64[4] = *(_OWORD *)((char *)&src[4] + 7);
    v64[5] = *(_OWORD *)((char *)&src[5] + 7);
    v64[6] = *(_OWORD *)((char *)&src[6] + 7);
    if ( *(_DWORD *)((char *)src + 7) == 2 )
    {
      v70[1] = <alloc::boxed::Box<T,A> as core::clone::Clone>::clone(*((_QWORD *)&v64[0] + 1));
      v70[0] = 2LL;
    }
    else
    {
      <forc_pkg::manifest::WorkspaceManifestFile as core::clone::Clone>::clone(src, v64);
      *(_OWORD *)&v70[12] = src[6];
      *(_OWORD *)&v70[10] = src[5];
      *(_OWORD *)&v70[8] = src[4];
      *(_OWORD *)&v70[6] = src[3];
      *(_OWORD *)&v70[4] = src[2];
      *(_OWORD *)&v70[2] = src[1];
      *(_OWORD *)v70 = src[0];
    }
    <forc_pkg::manifest::ManifestFile as core::convert::TryInto<forc_pkg::manifest::PackageManifestFile>>::try_into(v75);
    if ( *(_QWORD *)&v75[0] == 2LL )
    {
      forc_debug::server::DapServer::build_tests::{{closure}}(src, *((_QWORD *)&v75[0] + 1));
      memcpy(desta, src, 0xE8uLL);
      memcpy(v42, desta, 0xE8uLL);
      memcpy(dest + 1, v42, 0xE8uLL);
      *dest = 2LL;
LABEL_51:
      core::ptr::drop_in_place<forc_pkg::manifest::ManifestFile>(v64);
      return dest;
    }
    memcpy(desta, (char *)v75 + 8, 0xE8uLL);
    memcpy(&v77[240], &v75[15], 0x270uLL);
    memcpy(v42, desta, 0xE8uLL);
    memcpy(&v77[8], v42, 0xE8uLL);
    *(_QWORD *)v77 = *(_QWORD *)&v75[0];
    <forc_pkg::manifest::ManifestFile as forc_pkg::manifest::GenericManifestFile>::member_manifests(desta, v64);
    if ( LODWORD(desta[0]) == 1 )
    {
      forc_debug::server::DapServer::build_tests::{{closure}}(v75, *((_QWORD *)&desta[0] + 1));
      v9 = v75[0];
      v42[0] = *(_OWORD *)((char *)v75 + 1);
      *(_OWORD *)((char *)v42 + 15) = v75[1];
      memcpy(src, &v75[2], 0xC8uLL);
      if ( LOBYTE(v75[0]) != 51 )
      {
        *(_OWORD *)((char *)&v70[1] + 7) = *(_OWORD *)((char *)v42 + 15);
        *(_OWORD *)v70 = v42[0];
        memcpy(dest + 5, src, 0xC8uLL);
        *(_OWORD *)(dest + 3) = *(_OWORD *)((char *)&v70[1] + 7);
        *(_OWORD *)((char *)dest + 9) = *(_OWORD *)v70;
        *((_BYTE *)dest + 8) = v9;
        *dest = 2LL;
LABEL_50:
        core::ptr::drop_in_place<forc_pkg::manifest::PackageManifestFile>(v77);
        goto LABEL_51;
      }
    }
    else
    {
      *(_QWORD *)((char *)&v42[1] + 7) = *((_QWORD *)&desta[1] + 1);
      *(_OWORD *)((char *)v42 + 7) = *(_OWORD *)((char *)desta + 8);
    }
    v45 = *(_OWORD *)((char *)v42 + 7);
    v46 = *(_QWORD *)((char *)&v42[1] + 7);
    <forc_pkg::manifest::ManifestFile as forc_pkg::manifest::GenericManifestFile>::lock_path(desta, v64);
    v40 = *(_QWORD *)&desta[0];
    if ( __OFSUB__(-*(_QWORD *)&desta[0], 1LL) )
    {
      forc_debug::server::DapServer::build_tests::{{closure}}(v75, *((_QWORD *)&desta[0] + 1));
      v10 = v75[0];
      LODWORD(v42[0]) = *(_DWORD *)((char *)v75 + 1);
      *(_DWORD *)((char *)v42 + 3) = DWORD1(v75[0]);
      v11 = *((_QWORD *)&v75[0] + 1);
      v12 = v75[1];
      memcpy(src, &v75[2], 0xC8uLL);
      if ( LOBYTE(v75[0]) != 51 )
      {
        v22 = v42[0];
        *((_DWORD *)dest + 3) = *(_DWORD *)((char *)v42 + 3);
        *(_DWORD *)((char *)dest + 9) = v22;
        memcpy(dest + 5, src, 0xC8uLL);
        *((_BYTE *)dest + 8) = v10;
        dest[2] = v11;
        *(_OWORD *)(dest + 3) = v12;
        *dest = 2LL;
LABEL_49:
        core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,forc_pkg::manifest::PackageManifestFile>>(&v45);
        goto LABEL_50;
      }
      v40 = *((_QWORD *)&v75[0] + 1);
      v39 = *(_QWORD *)&v75[1];
    }
    else
    {
      v39 = *((_QWORD *)&desta[0] + 1);
    }
    forc_pkg::source::IPFSNode::public(v70);
    forc_pkg::pkg::BuildPlan::from_lock_and_manifests(v78, (__int64)v70);
    if ( v78[0] == 0x8000000000000000LL )
    {
      forc_debug::server::DapServer::build_tests::{{closure}}(v75, v78[1]);
      v13 = v75[0];
      memcpy(src, (char *)v75 + 1, 0x97uLL);
      v42[0] = *(_OWORD *)((char *)&v75[9] + 8);
      v42[1] = *(_OWORD *)((char *)&v75[10] + 8);
      v42[2] = *(_OWORD *)((char *)&v75[11] + 8);
      v42[3] = *(_OWORD *)((char *)&v75[12] + 8);
      v42[4] = *(_OWORD *)((char *)&v75[13] + 8);
      if ( LOBYTE(v75[0]) != 51 )
      {
        memcpy(desta, src, 0x97uLL);
        v14 = v42[1];
        v15 = v42[2];
        v16 = v42[3];
        *((_OWORD *)dest + 10) = v42[0];
        *((_OWORD *)dest + 11) = v14;
        *((_OWORD *)dest + 12) = v15;
        *((_OWORD *)dest + 13) = v16;
        *((_OWORD *)dest + 14) = v42[4];
        memcpy((char *)dest + 9, desta, 0x97uLL);
        *((_BYTE *)dest + 8) = v13;
        *dest = 2LL;
        core::ptr::drop_in_place<dap::types::ModuleId>(v70);
LABEL_48:
        core::ptr::drop_in_place<std::path::PathBuf>(v40, v39);
        goto LABEL_49;
      }
    }
    else
    {
      memcpy((char *)src + 7, v78, 0x90uLL);
    }
    memcpy((char *)desta + 7, (char *)src + 7, 0x90uLL);
    memcpy(v76, (char *)desta + 7, sizeof(v76));
    core::ptr::drop_in_place<dap::types::ModuleId>(v70);
    v55[0] = *(_QWORD *)&v77[168];
    v55[1] = *(_QWORD *)&v77[176];
    member_index = forc_pkg::pkg::BuildPlan::find_member_index(v76);
    v19 = v18;
    *(_QWORD *)&desta[0] = v55;
    *((_QWORD *)&desta[0] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&src[0] = &off_1F8CFF8;
    *((_QWORD *)&src[0] + 1) = 1LL;
    *(_QWORD *)&src[2] = 0LL;
    *(_QWORD *)&src[1] = desta;
    *((_QWORD *)&src[1] + 1) = 1LL;
    core::option::Option<T>::map_or_else(&v65, 0LL, v18, src);
    *(_OWORD *)((char *)v75 + 8) = v65;
    *((_QWORD *)&v75[1] + 1) = v66;
    LOBYTE(v75[0]) = 48;
    if ( (member_index & 1) == 0 )
    {
      *((_BYTE *)dest + 11) = BYTE3(v75[0]);
      *(_WORD *)((char *)dest + 9) = *(_WORD *)((char *)v75 + 1);
      v21 = DWORD1(v75[0]);
      memcpy(dest + 2, (char *)v75 + 8, 0xE0uLL);
      *((_BYTE *)dest + 8) = 48;
      *((_DWORD *)dest + 3) = v21;
      *dest = 2LL;
LABEL_47:
      core::ptr::drop_in_place<forc_pkg::pkg::BuildPlan>(v76);
      goto LABEL_48;
    }
    core::ptr::drop_in_place<forc_debug::error::AdapterError>(v75);
    core::iter::traits::iterator::Iterator::collect(&v61, v19);
    <forc_pkg::manifest::build_profile::BuildProfile as core::default::Default>::default(desta);
    *(_QWORD *)&v42[1] = *(_QWORD *)&desta[1];
    v42[0] = desta[0];
    v42[9] = desta[9];
    *(_OWORD *)((char *)&v42[3] + 8) = *(_OWORD *)((char *)&desta[3] + 8);
    *((_QWORD *)&v42[4] + 1) = *((_QWORD *)&desta[4] + 1);
    v42[5] = desta[5];
    *(_QWORD *)&v42[6] = *(_QWORD *)&desta[6];
    *(_OWORD *)((char *)&v42[6] + 8) = *(_OWORD *)((char *)&desta[6] + 8);
    *((_QWORD *)&v42[7] + 1) = *((_QWORD *)&desta[7] + 1);
    *(_OWORD *)((char *)&v42[2] + 8) = *(_OWORD *)((char *)&desta[2] + 8);
    *(_OWORD *)((char *)&v42[1] + 8) = *(_OWORD *)((char *)&desta[1] + 8);
    LOBYTE(v42[10]) = desta[10];
    v42[8] = desta[8];
    BYTE1(v42[10]) = 1;
    WORD1(v42[10]) = WORD1(desta[10]);
    BYTE4(v42[10]) = 0;
    BYTE5(v42[10]) = BYTE5(desta[10]);
    forc_pkg::pkg::build(
      (unsigned int)&v53,
      (unsigned int)v76,
      0,
      (unsigned int)v42,
      (unsigned int)&v61,
      1,
      0LL,
      1LL,
      0LL,
      0LL);
    if ( (_QWORD)v53 == 0x8000000000000000LL )
    {
      forc_debug::server::DapServer::build_tests::{{closure}}(v75, *((_QWORD *)&v53 + 1));
      v20 = v75[0];
      *(_OWORD *)v70 = *(_OWORD *)((char *)v75 + 1);
      *(_OWORD *)((char *)&v70[1] + 7) = v75[1];
      memcpy(src, &v75[2], 0xC8uLL);
      if ( LOBYTE(v75[0]) != 51 )
      {
        *(_OWORD *)((char *)&v56.m256i_u64[1] + 7) = *(_OWORD *)((char *)&v70[1] + 7);
        *(_OWORD *)v56.m256i_i8 = *(_OWORD *)v70;
        memcpy(dest + 5, src, 0xC8uLL);
        *(_OWORD *)(dest + 3) = *(_OWORD *)((char *)&v56.m256i_u64[1] + 7);
        *(_OWORD *)((char *)dest + 9) = *(_OWORD *)v56.m256i_i8;
        *((_BYTE *)dest + 8) = v20;
        *dest = 2LL;
        core::ptr::drop_in_place<forc_pkg::manifest::build_profile::BuildProfile>(v42);
LABEL_46:
        core::ptr::drop_in_place<std::collections::hash::set::HashSet<petgraph::graph_impl::NodeIndex>>(v61, v62);
        goto LABEL_47;
      }
    }
    else
    {
      *(__int64 *)((char *)&v70[2] + 7) = v54;
      *(_OWORD *)((char *)v70 + 7) = v53;
    }
    *(__int64 *)((char *)&v56.m256i_i64[2] + 7) = *(__int64 *)((char *)&v70[2] + 7);
    *(_OWORD *)((char *)&v56.m256i_u32[1] + 3) = *(_OWORD *)((char *)v70 + 7);
    v43 = *(_OWORD *)((char *)v70 + 7);
    v44 = *(__int64 *)((char *)&v70[2] + 7);
    core::ptr::drop_in_place<forc_pkg::manifest::build_profile::BuildProfile>(v42);
    *(_QWORD *)&v42[0] = *((_QWORD *)&v43 + 1);
    *((_QWORD *)&v42[0] + 1) = *((_QWORD *)&v43 + 1) + 1592 * v44;
    v23 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(v42, v77);
    *(_QWORD *)&desta[0] = v55;
    *((_QWORD *)&desta[0] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&src[0] = &off_1F8D008;
    *((_QWORD *)&src[0] + 1) = 1LL;
    *(_QWORD *)&src[2] = 0LL;
    *(_QWORD *)&src[1] = desta;
    *((_QWORD *)&src[1] + 1) = 1LL;
    core::option::Option<T>::map_or_else(&v67, 0LL, v24, src);
    *(_OWORD *)((char *)v75 + 8) = v67;
    *((_QWORD *)&v75[1] + 1) = v68;
    LOBYTE(v75[0]) = 48;
    if ( v23 )
    {
      core::ptr::drop_in_place<forc_debug::error::AdapterError>(v75);
      <sway_core::source_map::SourceMap as core::clone::Clone>::clone(v75, v23 + 1416);
      core::ptr::drop_in_place<sway_core::source_map::SourceMap>(a2 + 1624);
      *(_QWORD *)(a2 + 1688) = *(_QWORD *)&v75[4];
      v25 = v75[0];
      v26 = v75[1];
      v27 = v75[2];
      *(_OWORD *)(a2 + 1672) = v75[3];
      *(_OWORD *)(a2 + 1656) = v27;
      *(_OWORD *)(a2 + 1640) = v26;
      *(_OWORD *)(a2 + 1624) = v25;
      <forc_pkg::pkg::BuiltPackage as core::clone::Clone>::clone(src);
      *(_QWORD *)&v75[0] = 1LL;
      *((_QWORD *)&v75[0] + 1) = 1LL;
      memcpy(&v75[1], src, 0x630uLL);
      v69[1] = alloc::boxed::Box<T>::new(v75);
      v69[0] = 0x8000000000000000LL;
      forc_test::BuiltTests::from_built(v71, v69, v76);
      if ( LODWORD(v71[0]) == 5 )
      {
        forc_debug::server::DapServer::build_tests::{{closure}}(v75, *((_QWORD *)&v71[0] + 1));
        v28 = v75[0];
        desta[0] = *(_OWORD *)((char *)v75 + 1);
        desta[1] = *(_OWORD *)((char *)&v75[1] + 1);
        desta[2] = *(_OWORD *)((char *)&v75[2] + 1);
        desta[3] = *(_OWORD *)((char *)&v75[3] + 1);
        desta[4] = *(_OWORD *)((char *)&v75[4] + 1);
        *(_OWORD *)((char *)&desta[4] + 15) = v75[5];
        memcpy(src, &v75[6], 0x88uLL);
        if ( LOBYTE(v75[0]) != 51 )
        {
          *(_OWORD *)((char *)&v42[4] + 15) = *(_OWORD *)((char *)&desta[4] + 15);
          v42[4] = desta[4];
          v42[3] = desta[3];
          v42[2] = desta[2];
          v42[1] = desta[1];
          v42[0] = desta[0];
          memcpy(dest + 13, src, 0x88uLL);
          *(_OWORD *)(dest + 11) = *(_OWORD *)((char *)&v42[4] + 15);
          *(_OWORD *)((char *)dest + 73) = v42[4];
          v29 = v42[0];
          v30 = v42[1];
          v31 = v42[2];
          *(_OWORD *)((char *)dest + 57) = v42[3];
          *(_OWORD *)((char *)dest + 41) = v31;
          *(_OWORD *)((char *)dest + 25) = v30;
          *(_OWORD *)((char *)dest + 9) = v29;
          *((_BYTE *)dest + 8) = v28;
LABEL_37:
          *dest = 2LL;
LABEL_45:
          core::ptr::drop_in_place<alloc::vec::Vec<(petgraph::graph_impl::NodeIndex,forc_pkg::pkg::BuiltPackage)>>(&v43);
          goto LABEL_46;
        }
      }
      else
      {
        *(_QWORD *)((char *)&desta[5] + 7) = v72;
        *(_OWORD *)((char *)&desta[4] + 7) = v71[4];
        *(_OWORD *)((char *)&desta[3] + 7) = v71[3];
        *(_OWORD *)((char *)&desta[2] + 7) = v71[2];
        *(_OWORD *)((char *)&desta[1] + 7) = v71[1];
        *(_OWORD *)((char *)desta + 7) = v71[0];
      }
      *(_QWORD *)((char *)&v42[5] + 7) = *(_QWORD *)((char *)&desta[5] + 7);
      *(_OWORD *)((char *)&v42[4] + 7) = *(_OWORD *)((char *)&desta[4] + 7);
      v48 = *(__m256i *)((char *)desta + 7);
      v49 = *(_OWORD *)((char *)&desta[2] + 7);
      v50 = *(_OWORD *)((char *)&desta[3] + 7);
      v51 = *(_OWORD *)((char *)&desta[4] + 7);
      v52 = *(_QWORD *)((char *)&desta[5] + 7);
      v34 = *(_QWORD *)((char *)desta + 7);
      if ( *(_QWORD *)((char *)desta + 7) == 4LL )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v75, aPackageTestsWo);
        v35 = *(_QWORD *)&v75[1];
        *(_OWORD *)((char *)v75 + 7) = v75[0];
        *(_QWORD *)((char *)&v75[1] + 7) = v35;
        *((_BYTE *)dest + 8) = 48;
        v36 = *(_QWORD *)((char *)v75 + 15);
        v37 = *(_QWORD *)((char *)&v75[1] + 7);
        *(_OWORD *)((char *)dest + 9) = v75[0];
        dest[3] = v36;
        dest[4] = v37;
        *dest = 2LL;
      }
      else
      {
        v60 = v52;
        v59 = v51;
        v58 = v50;
        v57 = v49;
        v56 = v48;
        forc_test::PackageTests::setup(v75, &v56);
        if ( *(_QWORD *)&v75[0] != 0x8000000000000002LL )
        {
          v47 = v34;
          memcpy(v42, (char *)v75 + 8, 0xE8uLL);
          memcpy(&desta[15], &v75[15], 0x170uLL);
          memcpy(v70, v42, sizeof(v70));
          memcpy((char *)desta + 8, v70, 0xE8uLL);
          *(_QWORD *)&desta[0] = *(_QWORD *)&v75[0];
          <forc_pkg::pkg::BuiltPackage as core::clone::Clone>::clone(v75);
          memcpy(src, v75, sizeof(src));
          core::ptr::drop_in_place<core::option::Option<forc_pkg::pkg::BuiltPackage>>(v41);
          memcpy(v41, src, 0x630uLL);
          <forc_test::setup::TestSetup as core::clone::Clone>::clone(v75, desta);
          memcpy(src, v75, 0x260uLL);
          core::ptr::drop_in_place<core::option::Option<forc_test::setup::TestSetup>>(a2 + 1768);
          memcpy((void *)(a2 + 1768), src, 0x260uLL);
          <forc_pkg::pkg::BuiltPackage as core::clone::Clone>::clone(src);
          memcpy(&v75[99], desta, 0x260uLL);
          memcpy(v75, src, 0x630uLL);
          memcpy(dest, v75, 0x890uLL);
          core::ptr::drop_in_place<forc_test::PackageTests>(&v56);
          if ( v48.m256i_i32[0] == 4 )
            core::ptr::drop_in_place<forc_test::BuiltTests>(&v48);
          core::ptr::drop_in_place<alloc::vec::Vec<(petgraph::graph_impl::NodeIndex,forc_pkg::pkg::BuiltPackage)>>(&v43);
          core::ptr::drop_in_place<std::collections::hash::set::HashSet<petgraph::graph_impl::NodeIndex>>(v61, v62);
          core::ptr::drop_in_place<forc_pkg::pkg::BuildPlan>(v76);
          core::ptr::drop_in_place<std::path::PathBuf>(v40, v39);
          core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,forc_pkg::manifest::PackageManifestFile>>(&v45);
          core::ptr::drop_in_place<forc_pkg::manifest::PackageManifestFile>(v77);
          goto LABEL_51;
        }
        forc_debug::server::DapServer::build_tests::{{closure}}(src, *((_QWORD *)&v75[0] + 1));
        memcpy(v42, src, 0xE8uLL);
        memcpy(v70, v42, sizeof(v70));
        memcpy(dest + 1, v70, 0xE8uLL);
        *dest = 2LL;
        core::ptr::drop_in_place<forc_test::PackageTests>(&v56);
      }
      if ( v48.m256i_i32[0] == 4 )
        core::ptr::drop_in_place<forc_test::BuiltTests>(&v48);
      goto LABEL_45;
    }
    v32 = *(_DWORD *)((char *)v75 + 1);
    *((_DWORD *)dest + 3) = DWORD1(v75[0]);
    *(_DWORD *)((char *)dest + 9) = v32;
    v33 = *((_QWORD *)&v75[0] + 1);
    memcpy(dest + 3, &v75[1], 0xD8uLL);
    *((_BYTE *)dest + 8) = 48;
    dest[2] = v33;
    goto LABEL_37;
  }
  forc_debug::server::DapServer::build_tests::{{closure}}(v75, *((_QWORD *)&v73[0] + 1));
  v2 = v75[0];
  src[0] = *(_OWORD *)((char *)v75 + 1);
  src[1] = *(_OWORD *)((char *)&v75[1] + 1);
  src[2] = *(_OWORD *)((char *)&v75[2] + 1);
  src[3] = *(_OWORD *)((char *)&v75[3] + 1);
  src[4] = *(_OWORD *)((char *)&v75[4] + 1);
  src[5] = *(_OWORD *)((char *)&v75[5] + 1);
  src[6] = *(_OWORD *)((char *)&v75[6] + 1);
  *(_QWORD *)((char *)&src[6] + 15) = *(_QWORD *)&v75[7];
  desta[0] = *(_OWORD *)((char *)&v75[7] + 8);
  desta[1] = *(_OWORD *)((char *)&v75[8] + 8);
  desta[2] = *(_OWORD *)((char *)&v75[9] + 8);
  desta[3] = *(_OWORD *)((char *)&v75[10] + 8);
  desta[4] = *(_OWORD *)((char *)&v75[11] + 8);
  desta[5] = *(_OWORD *)((char *)&v75[12] + 8);
  desta[6] = *(_OWORD *)((char *)&v75[13] + 8);
  if ( LOBYTE(v75[0]) == 51 )
    goto LABEL_7;
  *(_QWORD *)&v77[111] = *(_QWORD *)((char *)&src[6] + 15);
  *(_OWORD *)&v77[96] = src[6];
  *(_OWORD *)&v77[80] = src[5];
  *(_OWORD *)&v77[64] = src[4];
  *(_OWORD *)&v77[48] = src[3];
  *(_OWORD *)&v77[32] = src[2];
  *(_OWORD *)&v77[16] = src[1];
  *(_OWORD *)v77 = src[0];
  *((_OWORD *)dest + 14) = desta[6];
  *((_OWORD *)dest + 13) = desta[5];
  *((_OWORD *)dest + 12) = desta[4];
  v3 = desta[0];
  v4 = desta[1];
  v5 = desta[2];
  *((_OWORD *)dest + 11) = desta[3];
  *((_OWORD *)dest + 10) = v5;
  *((_OWORD *)dest + 9) = v4;
  *((_OWORD *)dest + 8) = v3;
  dest[15] = *(_QWORD *)&v77[111];
  *(_OWORD *)((char *)dest + 105) = *(_OWORD *)&v77[96];
  *(_OWORD *)((char *)dest + 89) = *(_OWORD *)&v77[80];
  *(_OWORD *)((char *)dest + 73) = *(_OWORD *)&v77[64];
  v6 = *(_OWORD *)v77;
  v7 = *(_OWORD *)&v77[16];
  v8 = *(_OWORD *)&v77[32];
  *(_OWORD *)((char *)dest + 57) = *(_OWORD *)&v77[48];
  *(_OWORD *)((char *)dest + 41) = v8;
  *(_OWORD *)((char *)dest + 25) = v7;
  *(_OWORD *)((char *)dest + 9) = v6;
  *((_BYTE *)dest + 8) = v2;
  *dest = 2LL;
  return dest;
}