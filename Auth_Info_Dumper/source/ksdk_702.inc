/* functions */
KFUNC(0x001AE030, _sx_xlock, void, (void *sx, int opts, const char *file, int line));
KFUNC(0x001AE1F0, _sx_xunlock, void, (void *sx, const char *file, int line));
KFUNC(0x00301840, kmalloc, void *, (uint64_t size, void *area, uint64_t flags));
KFUNC(0x00301A40, kfree, void, (void *ptr, void *area));
KFUNC(0x00635BD0, sceSblDriverMapPages, int, (uint64_t *gpu_paddr, void *cpu_vaddr, uint32_t npages, uint64_t flags, uint64_t unk, uint64_t *gpu_desc));
KFUNC(0x006362B0, sceSblDriverUnmapPages, int, (uint64_t gpu_desc));
KFUNC(0x0064A990, map_chunk_table, int, (uint64_t *gpu_paddr, uint64_t *gpu_desc, void *cpu_vaddr));
KFUNC(0x0064AB60, make_chunk_table_system, int, (uint64_t *segment_info_gpu_paddr, uint64_t *segment_info_gpu_desc, void *segment_info_cpu_vaddr, size_t segment_info_size, void *chunk_table_cpu_vaddr, size_t chunk_table_size));
KFUNC(0x0064C110, sceSblServiceMailbox, int, (uint64_t module_id, void *query, void *reply));
KFUNC(0x0065C050, _sceSblAuthMgrSmFinalize, int, (void *ctx));

KFUNC(0x001D57D0, kern_get_self_auth_info, int, (struct thread* td, const char* path, int pathseg, char* info));

/* globals */
KDATA(0x0113E398, prison0, void*);
KDATA(0x01B16B40, M_AUTHMGR, void);
KDATA(0x022C5750, rootvnode, void*);
KDATA(0x026B80E0, sceSblAuthMgrModuleId, uint64_t);
KDATA(0x026B8128, authmgr_sm_xlock, void);
KDATA(0x026B8170, self_ctx_status, uint32_t);
KDATA(0x026B8180, self_contexts, self_context_t);
