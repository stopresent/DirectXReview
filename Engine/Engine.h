#pragma once

#include "Device.h"
#include "CommandQueue.h"
#include "SwapChain.h"

class Engine
{
public:
	void Init(const WindowInfo& info);
	void RenderBegin();
	void RenderEnd();

	void Render();
	
	void ResizeWindow(uint32 width, uint32 height);
private:
	WindowInfo		_window;
	D3D12_VIEWPORT	_viewport = {};
	D3D12_RECT		_scissorRect = {};

	shared_ptr<Device>			_device = make_shared<Device>();
	shared_ptr<CommandQueue>	_cmdQueue = make_shared<CommandQueue>();
	shared_ptr<SwapChain>		_swapChain = make_shared<SwapChain>();
};

