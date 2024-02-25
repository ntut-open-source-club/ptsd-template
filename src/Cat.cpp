#include "Cat.hpp"

#include "Util/Input.hpp"

Cat::Cat()
    : m_Animation(std::make_shared<Util::Animation>(
          std::vector<std::string>{
              RESOURCE_DIR"/sprites/cat/cat-0.bmp",
              RESOURCE_DIR"/sprites/cat/cat-1.bmp",
              RESOURCE_DIR"/sprites/cat/cat-2.bmp",
              RESOURCE_DIR"/sprites/cat/cat-3.bmp",
              RESOURCE_DIR"/sprites/cat/cat-4.bmp",
              RESOURCE_DIR"/sprites/cat/cat-5.bmp",
              RESOURCE_DIR"/sprites/cat/cat-6.bmp",
              RESOURCE_DIR"/sprites/cat/cat-7.bmp",
          },
          true, 50, true, 1000)) {
    m_Transform.translation = {-200, 200};
    SetDrawable(m_Animation);
}

void Cat::Update() {
    if (Util::Input::IsKeyDown(Util::Keycode::A)) {
        LOG_DEBUG("Pause");
        m_Animation->Pause();
    }

    if (Util::Input::IsKeyDown(Util::Keycode::S)) {
        LOG_DEBUG("Play");
        m_Animation->Play();
    }

    if (Util::Input::IsKeyDown(Util::Keycode::D)) {
        LOG_DEBUG("SetLooping(false)");
        m_Animation->SetLooping(false);
    }

    if (Util::Input::IsKeyDown(Util::Keycode::F)) {
        LOG_DEBUG("SetLooping(true)");
        m_Animation->SetLooping(true);
    }

    if (Util::Input::IsKeyUp(Util::Keycode::K)) {
        LOG_DEBUG("SetInterval(50)");
        m_Animation->SetInterval(50);
    }
    if (Util::Input::IsKeyDown(Util::Keycode::K)) {
        LOG_DEBUG("SetInterval(500)");
        m_Animation->SetInterval(500);
    }
}
