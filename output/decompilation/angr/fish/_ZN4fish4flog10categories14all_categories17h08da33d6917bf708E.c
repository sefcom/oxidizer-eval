long long fish::flog::categories::all_categories(struct_0 *a0)
{
    unsigned long long v1[41];  // rax

    v1 = 8.alloc_impl(328, 0);
    if (!v1)
        alloc::alloc::handle_alloc_error(8, 328); /* do not return */
    v1[0] = &_ZN4fish4flog10categories5error17h0a81292a895f9f38E;
    v1[1] = &_ZN4fish4flog10categories5debug17h1043a462bd6ac767E;
    v1[2] = &_ZN4fish4flog10categories7warning17hd8ac87b30a777078E;
    v1[3] = &_ZN4fish4flog10categories12warning_path17h35979b84b7f85625E;
    v1[4] = &_ZN4fish4flog10categories15deprecated_test17h9bfcb66d5ce1fb7aE;
    v1[5] = &_ZN4fish4flog10categories6config17h8fb150ace3d1c07eE;
    v1[6] = &_ZN4fish4flog10categories5event17h7a88d6f92be2d646E;
    v1[7] = &_ZN4fish4flog10categories4exec17h586db5c992aec53cE;
    v1[8] = &_ZN4fish4flog10categories15exec_job_status17h1ed3387157485fb6E;
    v1[9] = &_ZN4fish4flog10categories13exec_job_exec17hffb2c2731bde04f0E;
    v1[10] = &_ZN4fish4flog10categories9exec_fork17h811d151a35fa4e33E;
    v1[11] = &_ZN4fish4flog10categories14output_invalid17h0d9ff7b808c50f35E;
    v1[12] = &_ZN4fish4flog10categories16ast_construction17h9098cb003c5a18e8E;
    v1[13] = &_ZN4fish4flog10categories12proc_job_run17hd533cd183aa33ac7E;
    v1[14] = &_ZN4fish4flog10categories14proc_termowner17h6e2bb12faf5a6974E;
    v1[15] = &_ZN4fish4flog10categories18proc_internal_proc17h57a1c401b4d193d8E;
    v1[16] = &_ZN4fish4flog10categories18proc_reap_internal17hd44d3ae82af4e911E;
    v1[17] = &_ZN4fish4flog10categories18proc_reap_external17h3ecf9ab5fdf9293eE;
    v1[18] = &_ZN4fish4flog10categories11proc_pgroup17h40f4652a29cd0372E;
    v1[19] = &_ZN4fish4flog10categories10env_locale17h333eedb72d6b0aa5E;
    v1[20] = &_ZN4fish4flog10categories10env_export17h32ef67765070175fE;
    v1[21] = &_ZN4fish4flog10categories12env_dispatch17hd54a32cc1af05981E;
    v1[22] = &_ZN4fish4flog10categories9uvar_file17h277c8a6e1ba48b0fE;
    v1[23] = &_ZN4fish4flog10categories13uvar_notifier17hebc5a68ad8e9e10cE;
    v1[24] = &_ZN4fish4flog10categories13topic_monitor17h0bc7aa2872c73a1aE;
    v1[25] = &_ZN4fish4flog10categories13char_encoding17h2d6f2b97fc4d6ae6E;
    v1[26] = &_ZN4fish4flog10categories7history17h52a6af9b3f9d2da8E;
    v1[27] = &_ZN4fish4flog10categories12history_file17h5f5d5f406b98f59aE;
    v1[28] = &_ZN4fish4flog10categories15profile_history17h98f763160d367ceeE;
    v1[29] = &_ZN4fish4flog10categories18synced_file_access17h6652cbb29bf60403E;
    v1[30] = &_ZN4fish4flog10categories8iothread17h011940ff336e5958E;
    v1[31] = &_ZN4fish4flog10categories10fd_monitor17h193a25c85279e49fE;
    v1[32] = &_ZN4fish4flog10categories12term_support17h96e3a4f2269a7b67E;
    v1[33] = &_ZN4fish4flog10categories6reader17hd7be87ddd84c434fE;
    v1[34] = &_ZN4fish4flog10categories13reader_render17hb6b829b8e2895987E;
    v1[35] = &_ZN4fish4flog10categories8complete17h27f658ca9da9eca3E;
    v1[36] = &_ZN4fish4flog10categories4path17hd7bc3ce6fc2bce7aE;
    v1[37] = &_ZN4fish4flog10categories6screen17hdda07230e8e157e4E;
    v1[38] = &_ZN4fish4flog10categories5abbrs17h43f974bb3873f189E;
    v1[39] = &_ZN4fish4flog10categories7refcell17he7c3faf9d31b3ef3E;
    v1[40] = &_ZN4fish4flog10categories8autoload17h2bde00aa330c4556E;
    a0->field_0 = 41;
    a0->field_8 = v1;
    a0->field_10 = 41;
    return a0;
}
