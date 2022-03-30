#pragma once
#include <list>
#include <memory>
#include <stdexcept>
#include <functional>

#include "IEventHandler.hpp"
#include "SnakeInterface.hpp"
#include "SnakeController.hpp"

class Event;
class IPort;

namespace SnakeSegments{

template <class T>
class SnakeSegments{
public:
    SnakeSegments(std::list<T> m_segments):
    m_segments{m_segments}{}

    bool isSegmentAtPosition(int x, int y) const;
    T calculateNewHead() const;
    void updateSegmentsIfSuccessfullMove(T const& newHead);
    void addHeadSegment(T const& newHead);
    void removeTailSegmentIfNotScored(T const& newHead);
    void removeTailSegment();

private:
    std::list<T> m_segments;
};
} // namespace SnakeSegments