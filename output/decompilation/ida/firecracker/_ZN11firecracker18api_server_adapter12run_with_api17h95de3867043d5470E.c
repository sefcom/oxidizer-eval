__int64 __fastcall firecracker::api_server_adapter::run_with_api(
        _BYTE *a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        __int128 *a5,
        _OWORD *a6,
        char a7,
        char a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  unsigned int v13; // ebx
  unsigned __int128 v14; // kr00_16
  unsigned __int128 v15; // kr10_16
  __int128 v16; // kr20_16
  unsigned __int128 v17; // kr30_16
  unsigned int v18; // r15d
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rax
  unsigned int v22; // eax
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  int v25; // eax
  volatile signed __int64 *v26; // rax
  __int64 v27; // rt0
  char v28; // of
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  __int64 v32; // rbx
  char v33; // bp
  __int64 v34; // r13
  _BYTE *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm2
  _OWORD *v41; // r14
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rdi
  _BYTE *v46; // rdx
  __int128 v47; // xmm1
  __int128 v48; // xmm2
  __int64 v49; // rax
  __int64 v50; // rcx
  _QWORD *v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm2
  unsigned int v59; // [rsp+0h] [rbp-5A8h] BYREF
  unsigned int v60; // [rsp+4h] [rbp-5A4h] BYREF
  _BYTE *v61; // [rsp+8h] [rbp-5A0h]
  __int64 v62; // [rsp+10h] [rbp-598h]
  __int64 v63; // [rsp+18h] [rbp-590h]
  __int64 v64; // [rsp+20h] [rbp-588h]
  __int128 *v65; // [rsp+28h] [rbp-580h]
  unsigned int v66; // [rsp+34h] [rbp-574h]
  _QWORD *v67; // [rsp+38h] [rbp-570h]
  __int64 v68; // [rsp+40h] [rbp-568h]
  __int64 v69; // [rsp+48h] [rbp-560h]
  _QWORD *v70; // [rsp+50h] [rbp-558h]
  volatile signed __int64 *v71; // [rsp+58h] [rbp-550h] BYREF
  _BYTE v72[48]; // [rsp+60h] [rbp-548h] BYREF
  __int128 v73; // [rsp+90h] [rbp-518h]
  __int128 v74; // [rsp+A0h] [rbp-508h]
  _BYTE v75[47]; // [rsp+B0h] [rbp-4F8h]
  __int128 v76; // [rsp+E0h] [rbp-4C8h]
  __int64 v77; // [rsp+F0h] [rbp-4B8h]
  __int64 v78; // [rsp+F8h] [rbp-4B0h]
  _OWORD *v79; // [rsp+100h] [rbp-4A8h]
  __int128 v80; // [rsp+108h] [rbp-4A0h] BYREF
  __int128 v81; // [rsp+118h] [rbp-490h] BYREF
  __int64 v82; // [rsp+128h] [rbp-480h] BYREF
  _OWORD v83[24]; // [rsp+130h] [rbp-478h] BYREF
  __int128 v84; // [rsp+2B8h] [rbp-2F0h] BYREF
  __int128 v85; // [rsp+2C8h] [rbp-2E0h] BYREF
  _QWORD v86[6]; // [rsp+2D8h] [rbp-2D0h] BYREF
  unsigned int v87; // [rsp+308h] [rbp-2A0h]
  __int128 v88; // [rsp+310h] [rbp-298h] BYREF
  __int128 v89; // [rsp+320h] [rbp-288h]
  __int128 v90; // [rsp+330h] [rbp-278h]
  __int128 v91; // [rsp+340h] [rbp-268h]
  __int64 v92; // [rsp+350h] [rbp-258h]
  _BYTE v93[55]; // [rsp+358h] [rbp-250h] BYREF
  __int64 v94; // [rsp+38Fh] [rbp-219h]
  __int128 v95; // [rsp+410h] [rbp-198h] BYREF
  __int64 v96; // [rsp+420h] [rbp-188h]
  __int128 v97; // [rsp+428h] [rbp-180h] BYREF
  __int64 v98; // [rsp+438h] [rbp-170h]
  _BYTE dest[312]; // [rsp+440h] [rbp-168h] BYREF

  v79 = a6;
  v65 = a5;
  v70 = a3;
  v61 = a1;
  vmm_sys_util::linux::eventfd::EventFd::new(v83, 1LL);
  v59 = core::result::Result<T,E>::expect(v83, aCannotCreateAp, 26LL, &off_3A3BE8);
  vmm_sys_util::linux::eventfd::EventFd::new(v83, 2048LL);
  v13 = core::result::Result<T,E>::expect(v83, aCannotCreateAp_0, 30LL, &off_3A3C00);
  v60 = v13;
  std::sync::mpmc::channel(v83);
  v14 = v83[0];
  v77 = v14 >> 64;
  v78 = v14;
  v84 = v83[0];
  v15 = v83[1];
  v64 = v15 >> 64;
  v69 = v15;
  v80 = v83[1];
  std::sync::mpmc::channel(v83);
  v16 = v83[1];
  v17 = v83[0];
  v62 = v17 >> 64;
  v63 = v17;
  v81 = v83[0];
  v85 = v83[1];
  vmm_sys_util::linux::eventfd::EventFd::try_clone(v83, &v59);
  v18 = core::result::Result<T,E>::expect(v83, aFailedToCloneA, 28LL, &off_3A3C18);
  v68 = a2;
  v19 = hashbrown::map::HashMap<K,V,S,A>::remove(a2);
  if ( !v19 )
    core::option::expect_failed(aMissingSeccomp, 38LL, &off_3A3C30);
  v20 = v19;
  v82 = v19;
  micro_http::server::HttpServer::new(v83, a4);
  if ( *(_QWORD *)&v83[0] )
  {
    v66 = v18;
    v92 = *(_QWORD *)&v83[4];
    v91 = v83[3];
    v90 = v83[2];
    v89 = v83[1];
    v88 = v83[0];
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 3 )
    {
      *(_QWORD *)v72 = a4;
      *(_QWORD *)&v72[8] = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
      *(_QWORD *)&v83[0] = &off_3A3BC8;
      *((_QWORD *)&v83[0] + 1) = 2LL;
      *(_QWORD *)&v83[2] = 0LL;
      *(_QWORD *)&v83[1] = v72;
      *((_QWORD *)&v83[1] + 1) = 1LL;
      v21 = log::__private_api::loc(&off_3A3C48);
      *(_QWORD *)v93 = aFirecrackerApi_1;
      *(_QWORD *)&v93[8] = 31LL;
      *(_QWORD *)&v93[16] = aFirecrackerApi_1;
      *(_QWORD *)&v93[24] = 31LL;
      *(_QWORD *)&v93[32] = v21;
      log::__private_api::log_impl(v83, 3LL, v93);
    }
    v67 = a4;
    vmm_sys_util::linux::eventfd::EventFd::try_clone(v83, &v60);
    v22 = core::result::Result<T,E>::expect(v83, aFailedToCloneA_0, 31LL, &off_3A3C60);
    micro_http::server::HttpServer::add_kill_switch(v83, &v88, v22);
    core::result::Result<T,E>::expect(v83, aCannotAddHttpS, 34LL, &off_3A3C78);
    *(_QWORD *)&v83[1] = 0x8000000000000000LL;
    *(_QWORD *)&v83[0] = 0LL;
    BYTE8(v83[2]) = 0;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v72);
    std::thread::Builder::name(v93, v83, v72);
    *(_QWORD *)&v83[3] = v78;
    *((_QWORD *)&v83[3] + 1) = v77;
    v83[4] = v16;
    DWORD2(v83[10]) = v66;
    v83[5] = v88;
    v83[6] = v89;
    v83[7] = v90;
    v83[8] = v91;
    *(_QWORD *)&v83[9] = v92;
    v23 = v79[1];
    v24 = v79[2];
    v83[0] = *v79;
    v83[1] = v23;
    v83[2] = v24;
    *((_QWORD *)&v83[9] + 1) = v20;
    *(_QWORD *)&v83[10] = a9;
    std::thread::Builder::spawn_unchecked(v72, v93, v83);
    core::result::Result<T,E>::expect(&v97, v72);
    event_manager::manager::EventManager<S>::new_with_capacity(v83);
    core::result::Result<T,E>::expect(v93, v83, &off_3A3CA8);
    v25 = firecracker::metrics::PeriodicMetrics::new();
    *(_QWORD *)&v83[0] = 1LL;
    *((_QWORD *)&v83[0] + 1) = 1LL;
    *(_QWORD *)&v83[1] = 0LL;
    DWORD2(v83[1]) = v25;
    v26 = (volatile signed __int64 *)alloc::boxed::Box<T>::new(v83);
    v71 = v26;
    v27 = _InterlockedIncrement64(v26);
    if ( (v27 < 0) ^ v28 | (v27 == 0) )
      BUG();
    <event_manager::manager::EventManager<T> as event_manager::SubscriberOps>::add_subscriber(v93, v26, &off_3A3CC0);
    if ( *v70 == 0x8000000000000000LL )
    {
      v74 = v65[4];
      v29 = *v65;
      v30 = v65[1];
      v31 = v65[2];
      v73 = v65[3];
      *(_OWORD *)&v72[32] = v31;
      *(_OWORD *)&v72[16] = v30;
      *(_OWORD *)v72 = v29;
      vmm::rpc_interface::PrebootApiController::build_microvm_from_requests(
        (unsigned int)v83,
        v68,
        (unsigned int)v93,
        (unsigned int)v72,
        (unsigned int)&v80,
        (unsigned int)&v81,
        (__int64)&v59,
        a7,
        a8,
        a10,
        a11,
        a12);
      v32 = *(_QWORD *)&v83[0];
      if ( *(_QWORD *)&v83[0] == 0x8000000000000000LL )
      {
        *(_QWORD *)&v75[39] = *((_QWORD *)&v83[2] + 1);
        *(_OWORD *)&v75[23] = *(_OWORD *)((char *)&v83[1] + 8);
        *(_OWORD *)&v75[7] = *(_OWORD *)((char *)v83 + 8);
        v33 = 28;
      }
      else
      {
        v33 = BYTE8(v83[0]);
        *(_OWORD *)v75 = *(_OWORD *)((char *)v83 + 9);
        *(_OWORD *)&v75[16] = *(_OWORD *)((char *)&v83[1] + 9);
        *(_OWORD *)&v75[31] = *(_OWORD *)((char *)&v83[2] + 8);
        v76 = *(_OWORD *)((char *)&v83[3] + 8);
        memcpy(dest, (char *)&v83[4] + 8, sizeof(dest));
      }
      v41 = v61;
      v43 = v64;
      v44 = v63;
      v45 = v62;
      v42 = v69;
    }
    else
    {
      v74 = v65[4];
      v38 = *v65;
      v39 = v65[1];
      v40 = v65[2];
      v73 = v65[3];
      *(_OWORD *)&v72[32] = v40;
      *(_OWORD *)&v72[16] = v39;
      *(_OWORD *)v72 = v38;
      firecracker::build_microvm_from_json(v83, a8, a10, a11, a12);
      v32 = *(_QWORD *)&v83[0];
      v33 = BYTE8(v83[0]);
      *(_OWORD *)v75 = *(_OWORD *)((char *)v83 + 9);
      *(_OWORD *)&v75[16] = *(_OWORD *)((char *)&v83[1] + 9);
      *(_OWORD *)&v75[31] = *(_OWORD *)((char *)&v83[2] + 8);
      v76 = *(_OWORD *)((char *)&v83[3] + 8);
      if ( *(_QWORD *)&v83[0] != 0x8000000000000000LL )
        memcpy(dest, (char *)&v83[4] + 8, sizeof(dest));
      v41 = v61;
      v42 = v69;
      v43 = v64;
      v44 = v63;
      v45 = v62;
    }
    v86[4] = &v71;
    v87 = v59;
    v86[0] = v42;
    v86[1] = v43;
    v86[2] = v44;
    v86[3] = v45;
    v86[5] = v93;
    if ( v32 == 0x8000000000000000LL )
    {
      *(_OWORD *)&v72[32] = *(_OWORD *)&v75[31];
      *(_OWORD *)&v72[17] = *(_OWORD *)&v75[16];
      *(_OWORD *)&v72[1] = *(_OWORD *)v75;
      v73 = v76;
      v72[0] = v33;
      core::ptr::drop_in_place<firecracker::api_server_adapter::run_with_api::{{closure}}>(v86);
    }
    else
    {
      *(_OWORD *)((char *)&v83[2] + 8) = *(_OWORD *)&v75[31];
      *(_OWORD *)((char *)&v83[1] + 9) = *(_OWORD *)&v75[16];
      *(_OWORD *)((char *)v83 + 9) = *(_OWORD *)v75;
      *(_OWORD *)((char *)&v83[3] + 8) = v76;
      memcpy((char *)&v83[4] + 8, dest, 0x138uLL);
      *(_QWORD *)&v83[0] = v32;
      BYTE8(v83[0]) = v33;
      firecracker::api_server_adapter::run_with_api::{{closure}}((int)v72);
    }
    v52 = v67;
    v53 = vmm_sys_util::linux::eventfd::EventFd::write(&v60, 1LL);
    core::result::Result<T,E>::unwrap(v53);
    *(_QWORD *)&v83[1] = v98;
    v83[0] = v97;
    v54 = std::thread::JoinInner<T>::join(v83);
    core::result::Result<T,E>::expect(v54, v55);
    v56 = *(_OWORD *)v72;
    v57 = *(_OWORD *)&v72[16];
    v58 = *(_OWORD *)&v72[32];
    v41[3] = v73;
    v41[2] = v58;
    v41[1] = v57;
    *v41 = v56;
    core::ptr::drop_in_place<alloc::sync::Arc<std::sync::poison::mutex::Mutex<firecracker::metrics::PeriodicMetrics>>>(&v71);
    core::ptr::drop_in_place<event_manager::manager::EventManager<alloc::sync::Arc<std::sync::poison::mutex::Mutex<dyn event_manager::MutEventSubscriber>>>>(v93);
    core::ptr::drop_in_place<vmm_sys_util::linux::eventfd::EventFd>(v60);
    return core::ptr::drop_in_place<std::path::PathBuf>(*v52, v52[1]);
  }
  else
  {
    if ( DWORD2(v83[0]) == 23
      && (v34 = *(_QWORD *)&v83[1], (unsigned __int8)std::io::error::Error::kind(*(_QWORD *)&v83[1]) == 8) )
    {
      *(_QWORD *)v72 = v34;
      *(_OWORD *)v93 = *(_OWORD *)(a4 + 1);
      <T as alloc::string::SpecToString>::spec_to_string(&v95, v93);
      *(_QWORD *)&v93[23] = v96;
      *(_OWORD *)&v93[7] = v95;
      v35 = v61;
      *v61 = 30;
      v36 = *(_QWORD *)&v93[15];
      v37 = *(_QWORD *)&v93[23];
      *(_OWORD *)(v35 + 1) = *(_OWORD *)v93;
      *((_QWORD *)v35 + 2) = v36;
      *((_QWORD *)v35 + 3) = v37;
      core::ptr::drop_in_place<std::io::error::Error>(v72);
    }
    else
    {
      v94 = *((_QWORD *)&v83[3] + 1);
      *(_OWORD *)&v93[39] = *(_OWORD *)((char *)&v83[2] + 8);
      *(_OWORD *)&v93[23] = *(_OWORD *)((char *)&v83[1] + 8);
      *(_OWORD *)&v93[7] = *(_OWORD *)((char *)v83 + 8);
      v46 = v61;
      *v61 = 31;
      v47 = *(_OWORD *)&v93[16];
      v48 = *(_OWORD *)&v93[32];
      v49 = *(_QWORD *)&v93[47];
      v50 = v94;
      *(_OWORD *)(v46 + 1) = *(_OWORD *)v93;
      *(_OWORD *)(v46 + 17) = v47;
      *(_OWORD *)(v46 + 33) = v48;
      *((_QWORD *)v46 + 6) = v49;
      *((_QWORD *)v46 + 7) = v50;
    }
    core::ptr::drop_in_place<alloc::sync::Arc<alloc::vec::Vec<u64>>>(&v82);
    core::ptr::drop_in_place<vmm_sys_util::linux::eventfd::EventFd>(v18);
    core::ptr::drop_in_place<std::sync::mpsc::Receiver<alloc::boxed::Box<core::result::Result<vmm::rpc_interface::VmmData,vmm::rpc_interface::VmmActionError>>>>(&v85);
    core::ptr::drop_in_place<std::sync::mpsc::Sender<alloc::boxed::Box<core::result::Result<vmm::rpc_interface::VmmData,vmm::rpc_interface::VmmActionError>>>>(&v81);
    core::ptr::drop_in_place<std::sync::mpsc::Receiver<alloc::boxed::Box<vmm::rpc_interface::VmmAction>>>(&v80);
    core::ptr::drop_in_place<std::sync::mpsc::Sender<alloc::boxed::Box<vmm::rpc_interface::VmmAction>>>(&v84);
    core::ptr::drop_in_place<vmm_sys_util::linux::eventfd::EventFd>(v13);
    core::ptr::drop_in_place<vmm_sys_util::linux::eventfd::EventFd>(v59);
    core::ptr::drop_in_place<vmm::vmm_config::instance_info::InstanceInfo>(v65);
    core::ptr::drop_in_place<std::path::PathBuf>(*a4, a4[1]);
    return core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v70);
  }
}